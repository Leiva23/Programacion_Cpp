// Genera un programa que obtenga el siguiente resultado (incluyendo el aspecto visual).
#include <iostream>
using namespace std;

void main() {
	string nombre;
	short edad;
	string calle;
	int numCalle;

	cout << "Dime tu nombre" << endl;
	cin >> nombre;
	cout << endl;
	cout << "Dime tu edad" << endl;
	cin >> edad;
	cout << endl;
	cout << "Dime tu calle" << endl;
	cin >> calle;
	cout << endl;
	cout << "Dime numero de calle" << endl;
	cin >> numCalle;
	cout << endl;

	cout << "=============" << endl;
	cout << "  Sus Datos  " << endl;
	cout << "=============" << endl; 

	cout << "Su nombre es: " << nombre << endl;
	cout << "Su edad es: " << edad << endl;
	cout << "Usted vive en: " << calle << " " << numCalle;

}