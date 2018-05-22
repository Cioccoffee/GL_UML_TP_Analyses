
//---------- Interface de la classe <Mesure> (fichier Mesure.h) ----------------
#if ! defined ( Mesure_H )
#define Mesure_H
//#include "Empreinte.h"
//#include "TrajetSimple.h"

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types


//------------------------------------------------------------------------
// Rôle de la classe <Mesure>
//------------------------------------------------------------------------

class Mesure {
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
	// type Méthode ( liste des paramètres );
	// Mode d'emploi :
	//
	// Contrat :
	//

	Mesure(string nom, string type, string valeur);
	// Mode d'emploi :
	// crée la tete de la liste et l'initialise (le dernier élement pointe vers la tete)
	// Contrat :
	//

	Mesure(const Mesure &uneMesure);

	bool operator ==(const Mesure& m1)  const;

	bool estSimilaire(const Mesure &m);
	// Mode d'emploi :
	//
	// Contrat :
	//
	//

	string toString();
	// Mode d'emploi :
	//
	// Contrat :
	//
	//

	string Nom();
	// Mode d'emploi :
	// retourne le nom
	// Contrat :
	//
	//

	string Type();
	// Mode d'emploi :
	// retourne le type
	// Contrat :
	//
	//

	string Valeur();
	// Mode d'emploi :
	// retourne le valeur
	// Contrat :
	//
	//

	virtual ~Mesure();
	// Mode d'emploi :
	// détruit tous les éléments de la liste
	// Contrat :
	//

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

	string nom;
	string type;
	string valeur;

};

//-------------------------------- Autres définitions dépendantes de <Mesure>

#endif // Mesure_H
