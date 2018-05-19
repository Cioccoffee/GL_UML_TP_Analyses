//---------- Réalisation de la classe <EmpreinteMaladie> (fichier EmpreinteMaladie.cpp) ------------
//---------------------------------------------------------------- INCLUDE
//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "EmpreinteMaladie.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
//

EmpreinteMaladie(int id):Empreinte(int id)
{

}

EmpreinteMaladie(const EmpreinteMaladie &uneEmpreinteMaladie)
{

}

void ajouterMaladie(string maladie){
	this.maladies->push_back(*maladie);
}


/*operator ==(const EmpreinteMaladie& m1, const EmpreinteMaladie& m2)
{
	//appelle le parent -> supprimer la m�thode
}

bool estSimilaire(Empreinte &maladie)
{
	//appelle le parent
}*/

string toString() //appeler le parent + ajouter liste de maladies
{

	return "EmpreinteMaladie : "+ nom +" est un "+type+" de valeur "+valeur+"\n";
}


list<string> *  Maladies(){

}


virtual ~EmpreinteMaladie()
{

}
//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

