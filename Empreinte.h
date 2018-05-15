
//---------- Interface de la classe <Empreinte> (fichier Empreinte.h) ----------------
#if ! defined ( Empreinte_H )
#define Empreinte_H
//#include "Trajet.h"
//#include "TrajetSimple.h"
using namespace std;
//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types


//------------------------------------------------------------------------
// Rôle de la classe <Empreinte>
//------------------------------------------------------------------------

class Empreinte {
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
	// type Méthode ( liste des paramètres );
	// Mode d'emploi :
	//
	// Contrat :
	//

	Empreinte(string nom, string type, string valeur);
	// Mode d'emploi :
	// crée la tete de la liste et l'initialise (le dernier élement pointe vers la tete)
	// Contrat :
	//

	Empreinte(const Empreinte &uneEmpreinte);

	operator ==(const Empreinte& m1, const Empreinte& m2);

	bool estSimilaire(Empreinte &maladie)
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

	int Id();
	// Mode d'emploi :
	// retourne l'id
	// Contrat :
	//
	//

	//map<string,Mesure>* Mesures();
	// Mode d'emploi :
	// retourne le type
	// Contrat :
	//
	//

	Mesure* getMesure(string nomMesure)
	// Mode d'emploi :
	// retourne la mesure correspondant au nom demand�
	// Contrat :
	//
	//
	virtual ~Empreinte();
	// Mode d'emploi :
	// détruit tous les éléments de la liste
	// Contrat :
	//

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

	int id;
	map<string,Mesure> mesures;

};

//-------------------------------- Autres définitions dépendantes de <Empreinte>

#endif // Empreinte_H
