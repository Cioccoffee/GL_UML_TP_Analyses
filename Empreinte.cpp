//---------- Réalisation de la classe <Empreinte> (fichier Empreinte.cpp) ------------
//---------------------------------------------------------------- INCLUDE
//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Empreinte.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
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

operator ==(const Empreinte& m1, const Empreinte& m2)
{

}

bool estSimilaire(Empreinte &maladie)
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

//----------------------------------------------------- Méthodes protégées

