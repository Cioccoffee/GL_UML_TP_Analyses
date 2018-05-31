//---------- Réalisation de la classe <EmpreinteMaladie> (fichier EmpreinteMaladie.cpp) ------------
//---------------------------------------------------------------- INCLUDE
//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <list>
#include <iterator>

//------------------------------------------------------ Include personnel
#include "EmpreinteMaladie.h"
#include "Empreinte.h"
//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
//

EmpreinteMaladie::EmpreinteMaladie(int id) :
		Empreinte(id) {
	maladies = new list<string>();
}

//EmpreinteMaladie::EmpreinteMaladie(const EmpreinteMaladie &uneEmpreinteMaladie)
//{
//
//}

void EmpreinteMaladie::ajouterMaladie(string maladie) {
	this->maladies->push_back(maladie);
}

/*operator ==(const EmpreinteMaladie& m1, const EmpreinteMaladie& m2)
 {
 //appelle le parent -> supprimer la m�thode
 }

 bool estSimilaire(Empreinte &maladie)
 {
 //appelle le parent
 }*/

string EmpreinteMaladie::toString() //appeler le parent + ajouter liste de maladies
{
	string s = "";
	s += "EmpreinteMaladie : \n";
	s+=Empreinte::toString();
	s+="\n";
	s+="Liste des maladies liées à cette empreinte :\n";
	list<string>::iterator it;
	for(it = maladies->begin(); it != maladies->end(); ++it){
		s+="- ";
	    s+=(*it);
	    s+="\n";
	}
	s += "\n";

	return s;
}

list<string> * EmpreinteMaladie::Maladies() {
	return this->maladies;
}

EmpreinteMaladie::~EmpreinteMaladie() {
	//mesures.clear();
	delete mesures;
	maladies->clear();
	delete maladies;
}
//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

