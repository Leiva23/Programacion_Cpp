//  Crea un programa que pida al usuario un número de 6 cifras y muestre en orden qué número equivale a las unidades, cual a las decenas, cual a las centenas, etcétera…
#include <iostream>
using namespace std;

void main() {
	int numero;

	cout << "Dame un numero de 6 cifras: " << endl;
	cin >> numero;

	cout << "Unidades: " << numero % 10 << endl;
	cout << "Decenas: " << (numero/10) % 10 << endl;
	cout << "Centenas: " << (numero/100)% 10 << endl;
	cout << "Unidades de millar: " << (numero/1000) % 10 << endl; 
	cout << "Decenas de millar: " << (numero / 10000) % 10 << endl; 
	cout << "Centenas de millar: " << (numero / 100000) % 10 << endl;

}