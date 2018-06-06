#include <iostream>
#include "Mesure.h"
#include "Empreinte.h"
#include "EmpreinteMaladie.h"
#include "EmpreintePatient.h"

void TestMesureDouble() {
	//Mesure m1 = new Mesure ("fievre", "double", "37.9");
	Mesure m1("fievre", "double", "37.9");
	Mesure m2("fievre", "double", "39.9");
	Mesure m3("fievre", "double", "38.1");
	Mesure m4("toxine", "double", "38");
//    Mesure m2 = new Mesure ("fievre", "double", "38.9");
//    Mesure m3 = new Mesure ("fievre", "double", "38.1");
//    Mesure m4 = new Mesure ("toxine", "double", "10");
	cout << m1.toString();

	if (m1 == m3)
		cout << "test d'égalité 1 ok \n";
	else
		cout << "test 1 raté";

	if (m1 == m2)
		cout << "test d'égalité 2 raté \n";
	else
		cout << "test 2 ok \n";

	if (m1.estSimilaire(m4))
		cout << "test d'égalité 3 raté \n";
	else
		cout << "test 3 ok \n";

	if (m1.estSimilaire(m3))
		cout << "test d'égalité 1 ok \n";
	else
		cout << "test 1 raté \n";

	if (m1.estSimilaire(m2))
		cout << "test d'égalité 2 raté \n";
	else
		cout << "test 2 ok \n";

	if (m1.estSimilaire(m4))
		cout << "test d'égalité 3 raté \n";
	else
		cout << "test 3 ok \n";
}

void TestMesureInt() {
	//Mesure m1 = new Mesure ("fievre", "int", "100");
	Mesure m1("fievre", "int", "100");
	Mesure m2("fievre", "int", "107");
	Mesure m3("fievre", "int", "102");
	Mesure m4("toxine", "int", "100");
	//Mesure m2 = new Mesure ("fievre", "int", "107");
	//Mesure m3 = new Mesure ("fievre", "int", "102");
	//Mesure m4 = new Mesure ("toxine", "int", "100");
	cout << m1.toString();

	if (m1 == m3)
		cout << "test d'égalité 1 ok \n";
	else
		cout << "test 1 raté \n";

	if (m1 == m2)
		cout << "test d'égalité 2 raté \n";
	else
		cout << "test 2 ok \n";

	if (m1.estSimilaire(m4))
		cout << "test d'égalité 3 raté \n";
	else
		cout << "test 3 ok \n";

	if (m1.estSimilaire(m3))
		cout << "test d'égalité 1 ok \n";
	else
		cout << "test 1 raté \n";

	if (m1.estSimilaire(m2))
		cout << "test d'égalité 2 raté \n";
	else
		cout << "test 2 ok \n";

	if (m1.estSimilaire(m4))
		cout << "test d'égalité 3 raté \n";
	else
		cout << "test 3 ok \n";

}

void TestMesureString() {
	//Mesure m1 = new Mesure ("fievre", "string", "ab");
	Mesure m1("fievre", "string", "ab");

	Mesure m2("fievre", "string", "bc");
	Mesure m3("fievre", "string", "ab");
	Mesure m4("toxine", "string", "ab");

//    Mesure m2 = new Mesure ("fievre", "string", "bc");
//    Mesure m3 = new Mesure ("fievre", "string", "ab");
//    Mesure m4 = new Mesure ("toxine", "string", "ab");
	cout << m1.toString();

	if (m1 == m3)
		cout << "test d'égalité 1 ok \n";
	else
		cout << "test 1 raté";

	if (m1 == m2)
		cout << "test d'égalité 2 raté \n";
	else
		cout << "test 2 ok \n";

	if (m1.estSimilaire(m4))
		cout << "test d'égalité 3 raté \n";
	else
		cout << "test 3 ok \n";

	if (m1.estSimilaire(m3))
		cout << "test d'égalité 1 ok \n";
	else
		cout << "test 1 raté \n";

	if (m1.estSimilaire(m2))
		cout << "test d'égalité 2 raté \n";
	else
		cout << "test 2 ok \n";

	if (m1.estSimilaire(m4))
		cout << "test d'égalité 3 raté \n";
	else
		cout << "test 3 ok \n";
}

void TestMesureFloat() {
	/*Mesure m1 = new */Mesure m1("fievre", "float", "100.5");
	Mesure m2("fievre", "float", "107.5");
	Mesure m3("fievre", "float", "102.5");
	Mesure m4("toxine", "float", "100.5");
//
//    Mesure m2 = new Mesure ("fievre", "float", "107.5");
//    Mesure m3 = new Mesure ("fievre", "float", "102.5");
//    Mesure m4 = new Mesure ("toxine", "float", "100.5");
	cout << m1.toString();

	if (m1 == m3)
		cout << "test d'égalité 1 ok \n";
	else
		cout << "test 1 raté";

	if (m1 == m2)
		cout << "test d'égalité 2 raté \n";
	else
		cout << "test 2 ok \n";

	if (m1.estSimilaire(m4))
		cout << "test d'égalité 3 raté \n";
	else
		cout << "test 3 ok \n";

	if (m1.estSimilaire(m3))
		cout << "test d'égalité 1 ok \n";
	else
		cout << "test 1 raté \n";

	if (m1.estSimilaire(m2))
		cout << "test d'égalité 2 raté \n";
	else
		cout << "test 2 ok \n";

	if (m1.estSimilaire(m4))
		cout << "test d'égalité 3 raté \n";
	else
		cout << "test 3 ok \n";

}

//teste aussi Mesure de type bool

void TestEmpreinte() {

	Mesure m1("fievre", "double", "37.9");
	Mesure m2("pouls", "int", "95");
	Mesure m3("toxine", "float", "100.5");
	Mesure m4("couleur de la langue", "string", "blanche");
	Mesure m5("pale", "bool", "true");

	Mesure m12("fievre", "double", "37.9");
	Mesure m22("pouls", "int", "95");
	Mesure m32("toxine", "float", "100.5");
	Mesure m42("couleur de la langue", "string", "blanche");
	Mesure m52("pale", "bool", "true");

	Mesure m13("fievre", "double", "37.9");
	Mesure m23("pouls", "int", "70");
	Mesure m33("toxine", "float", "100.5");
	Mesure m43("couleur de la langue", "string", "blanche");
	Mesure m53("pale", "bool", "true");

	Empreinte e(1);
	Empreinte e2(2);
	Empreinte e3(3);

	e.ajouterMesure(m1);
	e.ajouterMesure(m2);
	e.ajouterMesure(m3);
	e.ajouterMesure(m4);
	e.ajouterMesure(m5);

	e2.ajouterMesure(m12);
	e2.ajouterMesure(m22);
	e2.ajouterMesure(m32);
	e2.ajouterMesure(m42);
	e2.ajouterMesure(m52);

	e3.ajouterMesure(m13);
	e3.ajouterMesure(m23);
	e3.ajouterMesure(m33);
	e3.ajouterMesure(m43);
	e3.ajouterMesure(m53);

	cout << e.toString() << endl;
	cout << e2.toString() << endl;
	cout << e3.toString() << endl;

	if (e == e2)
		cout << "test d'égalité 1 ok \n";
	else
		cout << "test 1 raté";

	if (e.estSimilaire(e2))
		cout << "test d'égalité 2 ok \n";
	else
		cout << "test 2 raté";

	if (e == e3)
		cout << "test d'égalité 3 raté \n";
	else
		cout << "test 3 ok\n";

	if (e.estSimilaire(e3))
		cout << "test d'égalité 4 raté \n";
	else
		cout << "test 4 ok\n";

}

void TestEmpreinteMaladie() {

	Mesure m1("fievre", "double", "37.9");
	Mesure m2("pouls", "int", "95");
	Mesure m3("toxine", "float", "100.5");
	Mesure m4("couleur de la langue", "string", "blanche");
	Mesure m5("pale", "bool", "true");

	Mesure m12("fievre", "double", "37.9");
	Mesure m22("pouls", "int", "95");
	Mesure m32("toxine", "float", "100.5");
	Mesure m42("couleur de la langue", "string", "blanche");
	Mesure m52("pale", "bool", "true");

	Mesure m13("fievre", "double", "37.9");
	Mesure m23("pouls", "int", "70");
	Mesure m33("toxine", "float", "100.5");
	Mesure m43("couleur de la langue", "string", "blanche");
	Mesure m53("pale", "bool", "true");

	EmpreinteMaladie e(1);
	EmpreinteMaladie e2(2);
	EmpreinteMaladie e3(3);

	e.ajouterMesure(m1);
	e.ajouterMesure(m2);
	e.ajouterMesure(m3);
	e.ajouterMesure(m4);
	e.ajouterMesure(m5);

	e2.ajouterMesure(m12);
	e2.ajouterMesure(m22);
	e2.ajouterMesure(m32);
	e2.ajouterMesure(m42);
	e2.ajouterMesure(m52);

	e3.ajouterMesure(m13);
	e3.ajouterMesure(m23);
	e3.ajouterMesure(m33);
	e3.ajouterMesure(m43);
	e3.ajouterMesure(m53);

	e.ajouterMaladie("intoxication");
	e.ajouterMaladie("allergie");

	e2.ajouterMaladie("intoxication");
	e2.ajouterMaladie("allergie");

	e3.ajouterMaladie("grippe");
	e3.ajouterMaladie("choléra");

	cout << e.toString() << endl;
	cout << e2.toString() << endl;
	cout << e3.toString() << endl;

	if (e == e2)
		cout << "test d'égalité 1 ok \n";
	else
		cout << "test 1 raté";

	if (e.estSimilaire(e2))
		cout << "test d'égalité 2 ok \n";
	else
		cout << "test 2 raté";

	if (e == e3)
		cout << "test d'égalité 3 raté \n";
	else
		cout << "test 3 ok\n";

	if (e.estSimilaire(e3))
		cout << "test d'égalité 4 raté \n";
	else
		cout << "test 4 ok\n";

}

void TestEmpreintePatient() {

	Mesure m1("fievre", "double", "37.9");
	Mesure m2("pouls", "int", "95");
	Mesure m3("toxine", "float", "100.5");
	Mesure m4("couleur de la langue", "string", "blanche");
	Mesure m5("pale", "bool", "true");

	Mesure m12("fievre", "double", "37.9");
	Mesure m22("pouls", "int", "95");
	Mesure m32("toxine", "float", "100.5");
	Mesure m42("couleur de la langue", "string", "blanche");
	Mesure m52("pale", "bool", "true");

	Mesure m13("fievre", "double", "37.9");
	Mesure m23("pouls", "int", "70");
	Mesure m33("toxine", "float", "100.5");
	Mesure m43("couleur de la langue", "string", "blanche");
	Mesure m53("pale", "bool", "true");

	EmpreintePatient e(1);
	EmpreintePatient e2(2);
	EmpreintePatient e3(3);

	e.ajouterMesure(m1);
	e.ajouterMesure(m2);
	e.ajouterMesure(m3);
	e.ajouterMesure(m4);
	e.ajouterMesure(m5);

	e2.ajouterMesure(m12);
	e2.ajouterMesure(m22);
	e2.ajouterMesure(m32);
	e2.ajouterMesure(m42);
	e2.ajouterMesure(m52);

	e3.ajouterMesure(m13);
	e3.ajouterMesure(m23);
	e3.ajouterMesure(m33);
	e3.ajouterMesure(m43);
	e3.ajouterMesure(m53);

	cout << e.toString() << endl;
	cout << e2.toString() << endl;
	cout << e3.toString() << endl;

	if (e == e2)
		cout << "test d'égalité 1 ok \n";
	else
		cout << "test 1 raté";

	if (e.estSimilaire(e2))
		cout << "test d'égalité 2 ok \n";
	else
		cout << "test 2 raté";

	if (e == e3)
		cout << "test d'égalité 3 raté \n";
	else
		cout << "test 3 ok\n";

	if (e.estSimilaire(e3))
		cout << "test d'égalité 4 raté \n";
	else
		cout << "test 4 ok\n";

	//tester analyse

	EmpreinteMaladie e4(1);
	EmpreinteMaladie e5(2);
	EmpreinteMaladie e6(3);

	e4.ajouterMesure(m1);
	e4.ajouterMesure(m2);
	e4.ajouterMesure(m3);
	e4.ajouterMesure(m4);
	e4.ajouterMesure(m5);

	e5.ajouterMesure(m12);
	e5.ajouterMesure(m22);
	e5.ajouterMesure(m32);
	e5.ajouterMesure(m42);
	e5.ajouterMesure(m52);

	e6.ajouterMesure(m13);
	e6.ajouterMesure(m23);
	e6.ajouterMesure(m33);
	e6.ajouterMesure(m43);
	e6.ajouterMesure(m53);

	e4.ajouterMaladie("intoxication");
	e4.ajouterMaladie("allergie");

	e5.ajouterMaladie("intoxication");
	e5.ajouterMaladie("allergie");

	e6.ajouterMaladie("grippe");
	e6.ajouterMaladie("choléra");

	cout << e4.toString() << endl;
	cout << e5.toString() << endl;
	cout << e6.toString() << endl;


	map<int,EmpreinteMaladie> catalogueMaladies;
//	catalogueMaladies[0]=e4;
//	catalogueMaladies[1]=e5;
//	catalogueMaladies[2]=e6;
//	catalogueMaladies.insert(std::make_pair(0,e4));
//	catalogueMaladies.insert(std::make_pair(1,e5));
//	catalogueMaladies.insert(std::make_pair(2,e6));

	catalogueMaladies.insert(pair<int,EmpreinteMaladie>(0, e4));
	catalogueMaladies.insert(pair<int,EmpreinteMaladie>(1, e5));
	catalogueMaladies.insert(pair<int,EmpreinteMaladie>(2, e6));

	set<string> infections1 = e.analyser(catalogueMaladies);
	set<string> infections2 = e2.analyser(catalogueMaladies);
	set<string> infections3 = e3.analyser(catalogueMaladies);

//	string st[] ={string("a"), string("b")};
//	set<string> infections1 (st,st+1);
	cout << "before print"<<endl;
	for(set<string>::iterator it=infections1.begin() ; it!=infections1.end() ; ++it)
		    {
		cout << *it <<endl;

		    }
}

int main() {
	//TestMesureInt();
	//TestMesureDouble();
	//sTestMesureFloat();
	//TestMesureString();
	//TestEmpreinte();
	//TestEmpreinteMaladie();
	//TestEmpreintePatient();
	return 0;
}
