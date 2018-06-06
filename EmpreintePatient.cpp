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

set<string> EmpreintePatient::analyser(map<int,EmpreinteMaladie> & catalogueMaladies){
	//set<string> infections;
	//infections.insert("");

	set<string> infections;
	int i = 1;
	cout <<i << endl;
	    for(map<int,EmpreinteMaladie>::iterator it=catalogueMaladies.begin() ; it!=catalogueMaladies.end() ; ++it)
	    {
	    	cout << i <<endl;
	        bool test = false;
	        test = this->Empreinte::estSimilaire(it->second);
	        if (test)
	        {
	            for (list<string>::iterator jt = (it->second).Maladies()->begin(); jt!=(it->second).Maladies()->end(); ++jt)
	            {
	                infections.insert(*jt);
	            }
	        }
	        i++;
	    }
	    return infections;


	///return infections;
}
string EmpreintePatient::toString() //appeler le parent
{
	string s = "";
	s+="EmpreintePatient : \n";
	s+=this->Empreinte::toString();
	s+="\n";

	return s;
}

EmpreintePatient::~EmpreintePatient()
{

}
//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

