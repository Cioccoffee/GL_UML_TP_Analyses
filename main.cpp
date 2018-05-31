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

//	if (e == e2)
//		cout << "test d'égalité 1 ok \n";
//	else
//		cout << "test 1 raté";
//
//	if (e.estSimilaire(e2))
//		cout << "test d'égalité 2 ok \n";
//	else
//		cout << "test 2 raté";
//
//	if (e == e3)
//		cout << "test d'égalité 3 raté \n";
//	else
//		cout << "test 3 ok\n";
//
//	if (e.estSimilaire(e3))
//		cout << "test d'égalité 4 raté \n";
//	else
//		cout << "test 4 ok\n";

}
int main() {
	//TestMesureInt();
	//TestMesureDouble();
	//sTestMesureFloat();
	//TestMesureString();
	//TestEmpreinte();
	//TestEmpreinteMaladie();
	return 0;
}
