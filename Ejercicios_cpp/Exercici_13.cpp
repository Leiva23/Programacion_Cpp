// Crea un programa que pida una cantidad en gramos y muestre de resultado u equivalencia en kilogramos y miligramos.

#include <iostream>
using namespace std;

void main() {
	short gramos;

	cout << "Dame un peso en gramos: " << endl;
	cin >> gramos;

	cout << "Peso en kilogramos: " << gramos * 1000 << "Kg" << endl;
	cout << "Peso en miligramos: " << gramos / 1000 << "mg" << endl;

}


