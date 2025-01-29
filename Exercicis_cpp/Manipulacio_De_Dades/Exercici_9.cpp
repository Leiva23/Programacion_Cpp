// Crea un programa que pida al usuario el lado de un cuadrado y con ello calcule su área.

#include <iostream>
using namespace std;

void main() {
	short cuadrado;

	cout << "Ingrese en metros el lado de un cuadrado: " << endl;
	cin >> cuadrado;

	cout << "Area del cuadrado: " << cuadrado * cuadrado << "m^2";

}