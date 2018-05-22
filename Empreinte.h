
//---------- Interface de la classe <Empreinte> (fichier Empreinte.h) ----------------
#if ! defined ( Empreinte_H )
#define Empreinte_H
//#include "Trajet.h"
//#include "TrajetSimple.h"
using namespace std;
#include <map>
#include <set>
#include "Mesure.h"
#include "EmpreinteMaladie.h"
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

	virtual void ajouterMesure(Mesure m);

	virtual bool operator ==(const Empreinte& m1);

	virtual bool estSimilaire(Empreinte &maladie);
	// Mode d'emploi :
	//
	// Contrat :
	//
	//

	virtual set<string> analyser(map<int,EmpreinteMaladie> & catalogueMaladies);

	virtual string toString();
	// Mode d'emploi :
	//
	// Contrat :
	//
	//

	virtual int Id();
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

	virtual Mesure* getMesure(string nomMesure);
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
