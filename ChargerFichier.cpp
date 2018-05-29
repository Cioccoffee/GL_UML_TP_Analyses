//---------- Réalisation de la classe <ChargerFichier> (fichier ChargerFichier.cpp) ------------
//---------------------------------------------------------------- INCLUDE
//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

//------------------------------------------------------ Include personnel
#include "ChargerFichier.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
ChargerFichier::ChargerFichier(){}

ChargerFichier::~ChargerFichier(){}

/*EmpreinteMaladie ChargerFichier::chargerMaladie (stringstream &ss, string** formatDonnees){
    /*int id;
    int valeurs[5];
    string nomMaladie;
    ss >> id;
    Empreinte e = new Empreinte(id);
    for (int i=0; i<5 ; ++i){
        ss >> valeurs[i];
        Mesure m = new Mesure(formatDonnees[i+1][0], formatDonnees[i+1][1], valeurs[i]);
        e.ajouterMesure(m);
    }
    ss >> nomMaladie;

    Empreinte e = chargerEmpreinte(ss, formatDonnees);
    string nomMaladie;
    ss >> nomMaladie;
    //EmpreinteMaladie maladie = new EmpreinteMaladie(nomMaladie, e);
    //return maladie;
}*/

Empreinte ChargerFichier::chargerEmpreinte (stringstream &ss, string** formatDonnees){
    int id;
    string a;
    string valeurs[5];
    ss >> a;
    id = atoi(a.c_str());
    Empreinte* e = new Empreinte(id);
    for (int i=0; i<5 ; ++i){
        ss >> valeurs[i];
        Mesure* m = new Mesure(formatDonnees[i+1][0], formatDonnees[i+1][1], valeurs[i]);
        e->ajouterMesure(*m);
    }
}

void ChargerFichier::chargerCollectionMaladies(map<int, EmpreinteMaladie> &catalogueMaladies, stringstream &ss, string** formatDonnees){
    EmpreinteMaladie maladie = chargerMaladie(ss, formatDonnees);
    //catalogueMaladies.insert(pair<int, EmpreinteMaladie>(,maladie));
}

void ChargerFichier::chargerCollectionEmpreintes(map<int, Empreinte> &catalogueEmpreintes, stringstream &ss, string** formatDonnees){
    Empreinte empreinte = chargerEmpreinte(ss, formatDonnees);
    //catalogueEmpreintes.insert(pair<int, Empreinte>(,empreinte));
}

string ChargerFichier::getTypeDonnees(stringstream &ss){
    string type, ligne;
    ss >> ligne;
    string patient = "NoID;A1;A2;A3;A4;AZ51";
    string maladie = "NoID;A1;A2;A3;A4;AZ51;Disease";
    string erreur = "erreur";
    string empreintePatient = "patients";
    string empreinteMaladie = "maladies";
    if (ligne==patient){
        return empreintePatient;
    }
    else if (ligne==maladie){
        return empreinteMaladie;
    }
    else{
        return erreur;
    }
}

string** ChargerFichier::getFormatDonnees (){
    //Calculer le nombre de ligne du fichier
    unsigned int nbLignes = 0;
    ifstream in("nomFichierMetadonnees" , ios::in);
    std::string ligne;
    while(std::getline(in, ligne)){
        nbLignes++;
    }
    in.close();
    //
    //Dégager l'entete
    ifstream ifs("nomFichierMetadonnees");
    string entete;
    ifs >> entete;
    //
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
    //
}

void ChargerFichier::charger(string nom, map<int, EmpreinteMaladie> &catalogueMaladies, map<int, Empreinte> &catalogueEmpreintes){
    string** formatDonnees = getFormatDonnees();    
}

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées



