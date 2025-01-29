// Crea un programa que al pedir un número muestre su tabla de multiplicar entera del 1 al 10.

#include <iostream>
using namespace std;

void main() {
	short numero;

	cout << "Dame un numero: " << endl;
	cin >> numero;

	for (short i=1; i<= 10; i++)
	{
		cout << i << "*" << numero << "=" << numero * i << endl;
	}

}