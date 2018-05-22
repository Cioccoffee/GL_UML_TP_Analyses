//---------- Réalisation de la classe <EmpreintePatient> (fichier EmpreintePatient.cpp) ------------
//---------------------------------------------------------------- INCLUDE
//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "EmpreintePatient.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
//

EmpreintePatient::EmpreintePatient(int id):Empreinte(id)
{

}

//EmpreintePatient::EmpreintePatient(const EmpreintePatient &uneEmpreintePatient)
//{
//
//}


/*operator ==(const EmpreintePatient& m1, const EmpreintePatient& m2)
{
	//appelle le parent -> supprimer la m�thode
}

bool estSimilaire(Empreinte &maladie)
{
	//appelle le parent
}*/

set<string> analyser(map<int,EmpreinteMaladie> & catalogueMaladies){
	set<string> infections;
	infections.insert("");
	return infections;
}
string EmpreintePatient::toString() //appeler le parent + ajouter liste de maladies
{
	string s = "";
	s+="EmpreintePatient : ";
	s+=this->id;
	s+="\n";

	return s;
}

EmpreintePatient::~EmpreintePatient()
{

}
//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

