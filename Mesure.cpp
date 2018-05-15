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

}

operator ==(const Mesure& m1, const Mesure& m2)
{

}

bool estSimilaire(Empreinte &maladie)
{

}

string toString()
{
	return "Mesure : "+ nom +" est un "+type+" de valeur "+valeur+"\n";
}


string Nom()
{

}


string Type(){

}


string Valeur()
{

}


virtual ~Mesure()
{

}
//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

