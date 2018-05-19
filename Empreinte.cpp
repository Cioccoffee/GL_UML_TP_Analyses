//---------- Réalisation de la classe <Empreinte> (fichier Empreinte.cpp) ------------
//---------------------------------------------------------------- INCLUDE
//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <map>
#include <set>
#include <iterator>

//------------------------------------------------------ Include personnel
#include "Empreinte.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
//

Empreinte::Empreinte(int id)
{
	this->id = id;
}

Empreinte::Empreinte(const Empreinte &uneEmpreinte)
{
	//compl�ter ?
}

void Empreinte::ajouterMesure(Mesure m)
{
	this->mesures->insert(new std::make_pair(m.Nom(),m));
}

bool Empreinte::operator ==(const Empreinte& m1/*, const Empreinte& m2*/)
{
	//for empreinte 1 -> legnth de mesures
	// si mesure existe dans empreinte 2
	// on cherche �galit�/similarit�
	// if not on return false
	// if on arrive � la fin de la boucle, return true
}

bool Empreinte::estSimilaire(Empreinte &maladie)
{
	return *this == maladie;
}

/*set<string> Empreinte::analyser(map<int,EmpreinteMaladie> & catalogueMaladies)
{

}*/
string Empreinte::toString()
{
	string s = "Empreinte : "+ *id +" :\n";
	const_iterator it;
	for(it = mesures.cbegin(); it!= mesures.cend(); ++it){
		s+=it->second.toString();
	}
	return "Empreinte : "+ *id +" :\n";
}


int Empreinte::Id()
{
	return id;
}


/*map<string,Mesure>* Mesures(){
	return *mesures;
}*/

Mesure* Empreinte::getMesure(string nomMesure){
	return *mesures.find(nomMesure);
}

virtual Empreinte::~Empreinte()
{

}
//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

