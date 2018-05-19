
//---------- Interface de la classe <EmpreinteMaladie> (fichier EmpreinteMaladie.h) ----------------
#if ! defined ( EmpreinteMaladie_H )
#define EmpreinteMaladie_H
//#include "Trajet.h"
//#include "TrajetSimple.h"

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types


//------------------------------------------------------------------------
// Rôle de la classe <EmpreinteMaladie>
//------------------------------------------------------------------------

class EmpreinteMaladie : public Empreinte{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
	// type Méthode ( liste des paramètres );
	// Mode d'emploi :
	//
	// Contrat :
	//

	EmpreinteMaladie(int id);
	// Mode d'emploi :
	// crée la tete de la liste et l'initialise (le dernier élement pointe vers la tete)
	// Contrat :
	//

	EmpreinteMaladie(const EmpreinteMaladie &uneEmpreinteMaladie);

	void ajouterMaladie(string maladie);

	operator ==(const EmpreinteMaladie& m1, const EmpreinteMaladie& m2);

	bool estSimilaire(Empreinte &maladie);
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

	list<string>* Maladies();
	// Mode d'emploi :
	// retourne le type
	// Contrat :
	//
	//


	virtual ~EmpreinteMaladie();
	// Mode d'emploi :
	// détruit tous les éléments de la liste
	// Contrat :
	//

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

	list<string> * maladies;

};

//-------------------------------- Autres définitions dépendantes de <EmpreinteMaladie>

#endif // EmpreinteMaladie_H
