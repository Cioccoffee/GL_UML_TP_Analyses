//---------- Réalisation de la classe <Empreinte> (fichier Empreinte.cpp) ------------
//---------------------------------------------------------------- INCLUDE
//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <map>
#include <set>
#include <iterator>
#include <algorithm>

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
	this->mesures->insert(std::make_pair(m.Nom(),m));
}

bool Empreinte::operator ==(const Empreinte& m1)
{
	//for empreinte 1 -> legnth de mesures
	// si mesure existe dans empreinte 2
	// on cherche �galit�/similarit�
	// if not on return false
	// if on arrive � la fin de la boucle, return true
	return true;
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
	string s = "Empreinte : ";
	s+= id ;
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

//set<string> Empreinte::analyser(map<int,EmpreinteMaladie> & catalogueMaladies)
//{
//    set<string> infections;
//    infections.insert("");
////    for(map<int,EmpreinteMaladie>::iterator it=catalogueMaladies.begin() ; it!=catalogueMaladies.end() ; ++it)
////    {
////        bool test = false;
////        test = this->estSimilaire(it->second);
////        if (test)
////        {
////            for (list<string>::iterator jt = it->maladies.begin(); jt!=it->maladies.end(); ++jt)
////            {
////                infections.insert(*jt)
////            }
////        }
////    }
//    return infections;
//}

/*map<string,Mesure>* Mesures(){
	return *mesures;
}*/

Mesure Empreinte::getMesure(string nomMesure){
	return ((*mesures->find(nomMesure)).second);
}

Empreinte::~Empreinte()
{

}
//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

