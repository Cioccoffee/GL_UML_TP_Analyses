//---------- Interface de la classe <ChargerFichier> (fichier ChargerFichier.h) ----------------
#if ! defined ( ChargerFichier_H )
#define ChargerFichier_H


//--------------------------------------------------- Interfaces utilisées
using namespace std;
#include <iostream>
#include <map>
#include <set>
#include <string>
#include "EmpreinteMaladie.h"
#include "Empreinte.h"
#include "Mesure.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types


//------------------------------------------------------------------------
// Rôle de la classe <ChargerFichier>
//Charger les fichiers contenant soit les données de maladies soit celles des empreintes
//------------------------------------------------------------------------

class ChargerFichier {
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
	EmpreinteMaladie chargerMaladie (stringstream &ss, string** formatDonnees);
    // type Méthode ( liste des paramètres );
	// Mode d'emploi: Charger une ligne depuis un fichier contenant des données de maladies
	//
	// Contrat:
	//
    Empreinte chargerEmpreinte (stringstream &ss, string** formatDonnees);
    // type Méthode ( liste des paramètres );
	// Mode d'emploi: Charger une ligne depuis un fichier contenant des données d'empreintes
	//
	// Contrat:
	//
    void chargerCollectionMaladies(map<int, EmpreinteMaladie> &catalogueMaladies, stringstream &ss, string** formatDonnees);
    // type Méthode ( liste des paramètres );
	// Mode d'emploi: Charger une collection de maladies depuis un fichier
	//
	// Contrat:
	//
    void chargerCollectionEmpreintes(map<int, Empreinte> &catalogueEmpreintes, stringstream &ss, string** formatDonnees);
    // type Méthode ( liste des paramètres );
	// Mode d'emploi: Charger une collection d"empreintes depuis un fichier
	//
	// Contrat:
    string getTypeDonnees(stringstream &ss);
    // type Méthode ( liste des paramètres );
	// Mode d'emploi: Renvoyer le type de données enregistré dans un fichier
	//
	// Contrat:
    string** getFormatDonnees ();
    // type Méthode ( liste des paramètres );
	// Mode d'emploi: Déterminner le type des données
	//
	// Contrat:
    void charger(string nom, map<int, EmpreinteMaladie> &catalogueMaladies, map<int, Empreinte> &catalogueEmpreintes);
    // type Méthode ( liste des paramètres );
	// Mode d'emploi: Charger un fichier
	//
	// Contrat:
    ChargerFichier();
    // type Méthode ( liste des paramètres );
	// Mode d'emploi: Constructeur
	//
	// Contrat:
    virtual ~ChargerFichier();
    // type Méthode ( liste des paramètres );
	// Mode d'emploi: Destructeur
	//
	// Contrat:

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
};

//-------------------------------- Autres définitions dépendantes de <ChargerFichier>

#endif // ChargerFichier_H
