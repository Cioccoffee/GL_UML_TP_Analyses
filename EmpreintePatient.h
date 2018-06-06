
//---------- Interface de la classe <EmpreintePatient> (fichier EmpreintePatient.h) ----------------
#if ! defined ( EmpreintePatient_H )
#define EmpreintePatient_H

#include <list>
#include "Empreinte.h"
#include "EmpreinteMaladie.h"

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types


//------------------------------------------------------------------------
// Rôle de la classe <EmpreintePatient>
//------------------------------------------------------------------------

class EmpreintePatient: public Empreinte{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
	// type Méthode ( liste des paramètres );
	// Mode d'emploi :
	//
	// Contrat :
	//

	EmpreintePatient(int id);
	// Mode d'emploi :
	// crée la tete de la liste et l'initialise (le dernier élement pointe vers la tete)
	// Contrat :
	//

	//EmpreintePatient(const EmpreintePatient &uneEmpreintePatient);

	set<string> analyser(map<int,EmpreinteMaladie> & catalogueMaladies);

	string toString();
	// Mode d'emploi :
	//
	// Contrat :
	//
	//



	virtual ~EmpreintePatient();
	// Mode d'emploi :
	// détruit tous les éléments de la liste
	// Contrat :
	//

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

	//list<string> * maladies;

};

//-------------------------------- Autres définitions dépendantes de <EmpreintePatient>

#endif // EmpreintePatient_H
