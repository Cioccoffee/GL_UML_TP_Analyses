//---------- R√©alisation de la classe <Empreinte> (fichier Empreinte.cpp) ------------
//---------------------------------------------------------------- INCLUDE
//-------------------------------------------------------- Include syst√®me
using namespace std;
#include <iostream>
#include <map>
#include <set>

//------------------------------------------------------ Include personnel
#include "Empreinte.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M√©thodes publiques
//

Empreinte(string nom, string type, string valeur)
{
	this.nom = nom;
	this.type = type;
	this.valeur = valeur;
}

Empreinte(const Empreinte &uneEmpreinte)
{

}

void ajouterMesure(Mesure)
{

}

bool operator ==(const Empreinte& m1, const Empreinte& m2)
{
	//for empreinte 1 -> legnth de mesures
	// si mesure existe dans empreinte 2
	// on cherche ÈgalitÈ/similaritÈ
	// if not on return false
	// if on arrive ‡ la fin de la boucle, return true
}

bool estSimilaire(Empreinte &maladie)
{

}

set<string> analyser(map<int,EmpreinteMaladie> & catalogueMaladies)
{

}
string toString()
{
	string s = "Empreinte : "+ id +" :\n";
	const_iterator it;
	for(it = mesures.cbegin(); it!= mesures.cend(); ++it){
		s+=it->second.toString();
	}
	return "Empreinte : "+ id +" :\n";
}


int Id()
{
	return id;
}


/*map<string,Mesure>* Mesures(){
	return *mesures;
}*/

Mesure* getMesure(string nomMesure){
	return *mesures.find(nomMesure);
}

virtual ~Empreinte()
{

}
//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M√©thodes prot√©g√©es

