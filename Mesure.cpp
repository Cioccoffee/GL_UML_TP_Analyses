//---------- Réalisation de la classe <Mesure> (fichier Mesure.cpp) ------------
//---------------------------------------------------------------- INCLUDE
//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Mesure.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
//

Mesure(string nom, string type, string valeur)
{
	this.nom = nom;
	this.type = type;
	this.valeur = valeur;
}

Mesure(const Mesure &uneMesure)
{
	this.nom = uneMesure.nom;
	this.type = uneMesure.type;
	this.valeur = uneMesure.valeur;
}

bool operator ==(const Mesure& m1, const Mesure& m2)
{
	if(m1.nom == m2.nom & m1.type == m2.type)
	{
		if(0.95*m2.valeur <= m1.valeur & m1.valeur <= 1.05*m2.valeur) return true;

		return false;
	}
	return false;
}

bool estSimilaire(Empreinte &maladie)
{
	return this == maladie;
}

string toString()
{
	return "Mesure : "+ nom +" est un "+type+" de valeur "+valeur+"\n";
}


string Nom()
{
	return nom;
}


string Type(){
	return type;
}


string Valeur()
{
	return valeur;
}


virtual ~Mesure()
{

}
//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

