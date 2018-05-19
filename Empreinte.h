
//---------- Interface de la classe <Empreinte> (fichier Empreinte.h) ----------------
#if ! defined ( Empreinte_H )
#define Empreinte_H
//#include "Trajet.h"
//#include "TrajetSimple.h"
using namespace std;
#include <map>
#include <set>
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

	Empreinte(int id);
	// Mode d'emploi :
	//
	// Contrat :
	//

	Empreinte(const Empreinte &uneEmpreinte);

	void ajouterMesure(Mesure);

	bool operator ==(const Empreinte& m1, const Empreinte& m2);

	bool estSimilaire(Empreinte &maladie);
	// Mode d'emploi :
	//
	// Contrat :
	//
	//

	set<string> analyser(map<int,EmpreinteMaladie> & catalogueMaladies);

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
	map<string,Mesure> * mesures;

};

//-------------------------------- Autres définitions dépendantes de <Empreinte>

#endif // Empreinte_H
