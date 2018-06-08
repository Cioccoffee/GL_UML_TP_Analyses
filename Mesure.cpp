//---------- Réalisation de la classe <Mesure> (fichier Mesure.cpp) ------------
//---------------------------------------------------------------- INCLUDE
//-------------------------------------------------------- Include système

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
//#include <stdlib.h>
using namespace std;
//------------------------------------------------------ Include personnel
#include "Mesure.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
//

Mesure::Mesure(string nom, string type, string valeur) {
	this->nom = nom;
	this->type = type;
	this->valeur = valeur;
}

Mesure::Mesure(const Mesure &uneMesure) {
	this->nom = uneMesure.nom;
	this->type = uneMesure.type;
	this->valeur = uneMesure.valeur;
}

bool Mesure::operator ==(const Mesure& m1) const {

	if (this->nom == m1.nom && this->type == m1.type) {

		/*if (this->type == "bool") {

		 } else */if (this->type == "string" || this->type == "bool") {
			return this->valeur == (m1.valeur);

		} else {
			if (this->type == "double") {
				//string s1(this->valeur);
				//double val1 = stod(s1);
				double val1 = std::atof((this->valeur).c_str());
				//double val1 = std::stod(this->valeur);
				//double val2 = stod(m1.valeur);
				double val2 = std::atof((m1.valeur).c_str());
				if ((0.95 * val2 <= val1) && (val1 <= val2))
					return true;
			} else if (this->type == "int") {
				int val1 = std::atoi((this->valeur).c_str());//stoi(this->valeur);

				int val2 = std::atoi((m1.valeur).c_str()); //int val2 = std::stoi(m1.valeur);
				if ((0.95 * val2 <= val1) && (val1 <= val2))
					return true;
			} else if (this->type == "float") {
				float val1 = std::atof((this->valeur).c_str());
				//float val1 = stoi(this->valeur);
				float val2 = std::atof((m1.valeur).c_str());
				//float val2 = stoi(m1.valeur);
				if ((0.95 * val2 <= val1) && (val1 <= val2))
					return true;
			}

		}

//		else  if(this->type ==""){
//
//		}else if(this->type ==""){
//
//		}else if(this->type ==""){
//
//		}else if(this->type ==""){
//
//		}else if(this->type ==){
//
//		}else if(this->type ==){
//
//		}

	}
	//if(0.95*m1.valeur <= this->valeur & this->valeur <= 1.05*m1.valeur) return true;

	return false;
}

bool Mesure::estSimilaire(const Mesure &m) {
	return this->operator ==(m);
}

string Mesure::toString() {
	string s;
	stringstream ss(s);
	ss << "\t\tNom: " << nom << '\n';
	ss << "\t\tType: " << type << '\n';
	ss << "\t\tValeur: " << valeur << '\n';
	return ss.str();
}

string Mesure::Nom() {
	return nom;
}

string Mesure::Type() {
	return type;
}

string Mesure::Valeur() {
	return valeur;
}

Mesure::~Mesure() {

}
//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

