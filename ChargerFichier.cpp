//---------- Réalisation de la classe <ChargerFichier> (fichier ChargerFichier.cpp) ------------
//---------------------------------------------------------------- INCLUDE
//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <string>
#include <set>
#include <vector>

//------------------------------------------------------ Include personnel
#include "ChargerFichier.h"

//------------------------------------------------------------- Constantes
#define FICHIERMETADONNEES "HealthMeasurementDescription.txt"
#define ENTETEPATIENT "NoID;A1;A2;A3;A4"
#define ENTETEMALADIE "NoID;A1;A2;A3;A4;Disease"
#define FINDELECTURE 1
#define ERREURDELECTURE 404
#define ENTETENONCONFORME 300
#define LECTUREEMPREINTEPATIENT 200
#define LECTUREEMPREINTEMALADIE 100
#define EMPREINTEPATIENT 200
#define EMPREINTEMALADIE 100
#define ERREUR 0
#define NBVALEURS 4
#define SAIN "Aucune maladie"

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
ChargerFichier::ChargerFichier(){}

ChargerFichier::~ChargerFichier(){}

EmpreinteMaladie* ChargerFichier::chargerMaladie (stringstream &ss, string** formatDonnees, set<string> &maladies, multimap<string, EmpreinteMaladie*> &catalogueSymptomes){
    int id;
    string valeurs[NBVALEURS];
    string a;
    string nomMaladie;
    getline(ss, a, ';');
    id = atoi(a.c_str());
    EmpreinteMaladie* maladie = new EmpreinteMaladie(id);
    for (int i=0; i<NBVALEURS ; ++i){
        getline(ss, valeurs[i], ';');
        Mesure* m = new Mesure(formatDonnees[i+1][0], formatDonnees[i+1][1], valeurs[i]);
        maladie->ajouterMesure(*m);
    }
    getline(ss, nomMaladie);
    if (nomMaladie.length()==0){
        nomMaladie = SAIN;
    }
    if (nomMaladie != SAIN){ 
        maladies.insert(nomMaladie);
    }
    maladie->ajouterMaladie(nomMaladie);    
    catalogueSymptomes.insert(pair<string, EmpreinteMaladie*>(nomMaladie, maladie));
    return maladie;
}

EmpreintePatient* ChargerFichier::chargerEmpreintePatient (stringstream &ss, string** formatDonnees){
    int id;
    string a;
    string valeurs[NBVALEURS];
    getline(ss, a, ';');
    id = atoi(a.c_str());
    EmpreintePatient* e = new EmpreintePatient(id);
    for (int i=0; i<NBVALEURS ; ++i){
        if (i!=NBVALEURS-1){
            getline(ss, valeurs[i], ';');
        }
        else{
            getline(ss, valeurs[i]);
        }
        Mesure* m = new Mesure(formatDonnees[i+1][0], formatDonnees[i+1][1], valeurs[i]);
        e->ajouterMesure(*m);
    }
    return e;
}

void ChargerFichier::chargerCollectionMaladies(map<int, EmpreinteMaladie*> &catalogueMaladies, multimap<string, EmpreinteMaladie*> &catalogueSymptomes, stringstream &ss, string** formatDonnees, set<string> &maladies){
    EmpreinteMaladie* maladie = chargerMaladie(ss, formatDonnees, maladies, catalogueSymptomes);
    bool added = false;
    for (auto it = catalogueMaladies.begin(); it!=catalogueMaladies.end() && added == false; ++it){
        if (maladie->Id() == it->second->Id()){
            it->second->ajouterMaladie(*(maladie->Maladies()->begin()));
            added = true;
        }
    }
    if (added == false){
        catalogueMaladies.insert(pair<int, EmpreinteMaladie*>(maladie->Id(),maladie));
    }
}

void ChargerFichier::chargerCollectionEmpreintes(map<int, EmpreintePatient*> &catalogueEmpreintes, stringstream &ss, string** formatDonnees){
    EmpreintePatient* empreinte = chargerEmpreintePatient(ss, formatDonnees);
    catalogueEmpreintes.insert(pair<int, EmpreintePatient*>(empreinte->Id(), empreinte));
}

int ChargerFichier::getTypeDonnees(stringstream &ss){
    string ligne;
    getline(ss, ligne);
    if (ligne==ENTETEPATIENT){
        return EMPREINTEPATIENT;
    }
    else if (ligne==ENTETEMALADIE){
        return EMPREINTEMALADIE;
    }
    else{
        return ERREUR;
    }
}

string** ChargerFichier::getFormatDonnees (){
    //Calculer le nombre de ligne du fichier
    unsigned int nbLignes = 0;
    ifstream in(FICHIERMETADONNEES, ios::in);
    string ligne;
    while(std::getline(in, ligne)){
        nbLignes++;
    }
    in.close();
    //Dégager l'entete
    ifstream ifs(FICHIERMETADONNEES);
    string entete;
    getline(ifs, entete);
    //Lire depuis le fichier + Remplir variable + return
    string** formatDonnees = new string*[nbLignes-1] ;
    for(unsigned int i = 0; i < nbLignes-1; ++i){
        formatDonnees[i] = new string[2];
    }   
    for(unsigned int i=0; i<nbLignes-1; ++i){
        getline(ifs, formatDonnees[i][0], ';');
        getline(ifs, formatDonnees[i][1]);
    }
    ifs.close();
    return formatDonnees;
}

int ChargerFichier::charger(string nom, map<int, EmpreinteMaladie*> &catalogueMaladies, multimap<string, EmpreinteMaladie*> &catalogueSymptomes, map<int, EmpreintePatient*> &catalogueEmpreintes, set<string> &maladies){
    //Test d'ouverture du fichier
    ifstream in(nom, ios::in);    
    if (!in){
        return ERREURDELECTURE;
    }
    string line;
    getline(in, line);
    stringstream ss(line);
    //Lecture de l'entête du fichier pour s’il contient des empreintes de maladies ou des empreintes à analyser
    int typeDonnees = getTypeDonnees(ss);
    if (typeDonnees==ERREUR){
        return ENTETENONCONFORME;
    }
    //Lecture de fichier de metadonnées
    string** formatDonnees = getFormatDonnees(); 
    //Chargement des données selon le type de données du fichier 
    size_t npos = -1;
    if(typeDonnees == EMPREINTEPATIENT){
        while (!in.eof()){
            getline(in, line);
            if (line.find(';')==npos){
                continue;
            }
            ss.clear();
            ss.str(line);
            chargerCollectionEmpreintes(catalogueEmpreintes, ss, formatDonnees);
        }
        return LECTUREEMPREINTEPATIENT;
    }
    else if (typeDonnees == EMPREINTEMALADIE){
        while (!in.eof()){
            getline(in, line);
            if (line.find(';')==npos){
                continue;
            }
            ss.clear();
            ss.str(line);
            chargerCollectionMaladies(catalogueMaladies, catalogueSymptomes,ss, formatDonnees, maladies);
        }
        return LECTUREEMPREINTEMALADIE;
    }
    in.close();
    return FINDELECTURE;
}

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées



