#include <iostream>
#include "Mesure.h"
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

int main() {
	//TestMesureInt();
	//TestMesureDouble();
	//sTestMesureFloat();
	TestMesureString();
	return 0;
}
