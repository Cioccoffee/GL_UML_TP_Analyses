//---------- Réalisation de la classe <Mesure> (fichier Mesure.cpp) ------------
//---------------------------------------------------------------- INCLUDE
//-------------------------------------------------------- Include système

#include <iostream>
#include <string>
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

		if (this->type == "boolean") {

		} else if (this->type == "string") {
			return this->valeur.compare(m1.valeur);

		} else {
			if (this->type == "double") {
				double val1 = std::stod(this->valeur);
				double val2 = stod(m1.valeur);
				if((0.95*val2 <= val1) && (val1 <= val2)) return true;
			} else if (this->type == "int") {
				int val1 = atoi((this->valeur).c_str());//stoi(this->valeur);
				int val2 = stoi(m1.valeur);
				if((0.95*val2 <= val1) && (val1 <= val2)) return true;
			} else if (this->type == "float") {
				float val1 = stoi(this->valeur);
				float val2 = stoi(m1.valeur);
				if((0.95*val2 <= val1) && (val1 <= val2)) return true;
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
	return this->operator == (m);
}

string Mesure::toString() {
return "Mesure : " + nom + " est un " + type + " de valeur " + valeur + "\n";
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

