//---------- Réalisation de la classe <Empreinte> (fichier Empreinte.cpp) ------------
//---------------------------------------------------------------- INCLUDE
//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <map>
#include <set>
#include <iterator>
#include <algorithm>
#include <sstream>

//------------------------------------------------------ Include personnel
#include "Empreinte.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
//

Empreinte::Empreinte(){

}


Empreinte::Empreinte(int id)
{
	this->id = id;
	mesures = new map<string,Mesure>();
}

Empreinte::Empreinte(const Empreinte &uneEmpreinte)
{
	//compl�ter ?
}

void Empreinte::ajouterMesure(Mesure m)
{
	this->mesures->insert(std::make_pair(m.Nom(),m));
}

bool Empreinte::operator ==(const Empreinte& m1)
{
	//for empreinte 1 -> legnth de mesures
	// si mesure existe dans empreinte 2
	// on cherche �galit�/similarit�
	// if not on return false
	// if on arrive � la fin de la boucle, return true
	for(map<string,Mesure>::iterator it=m1.mesures->begin() ; it!=m1.mesures->end() ; ++it)
	    {
			map<string,Mesure>::iterator jt = (this->mesures)->find(it->first);
			//Mesure m = ((this->mesures)->find(it->first))->second;

	        if (jt != (this->mesures)->end())
	        {
	            if(it->second.estSimilaire(jt->second)==false)
	            return false;
	        }
	        else
	            return false;
	    }
	return true;
}

bool Empreinte::estSimilaire(Empreinte &maladie)
{
	return *this == maladie;
}

/*set<string> Empreinte::analyser(map<int,EmpreinteMaladie> & catalogueMaladies)
{

}*/
string IntToString (int i)
{
    ostringstream temp;
    temp<<i;
    return temp.str();
}

string Empreinte::toString()
{
	string s = "Empreinte ";
	s+= IntToString(id) ;
	s+=" :\n";
	map<string,Mesure>::iterator it;
	for(it = mesures->begin(); it!= mesures->end(); ++it){
		s+=it->second.toString();
	}
	return s; //"Empreinte : "+ *id +" :\n";
}

int Empreinte::Id()
{
	return id;
}


/*map<string,Mesure>* Mesures(){
	return *mesures;
}*/

Mesure Empreinte::getMesure(string nomMesure){
	return ((*mesures->find(nomMesure)).second);
}

Empreinte::~Empreinte()
{
	//mesures->clear();
	delete mesures;
}
//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

