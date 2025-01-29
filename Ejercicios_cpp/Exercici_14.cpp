//  Crea un programa que pida 3 números al usuario y muestre el valor promedio de ellos.

#include <iostream>
using namespace std;

void main() {
	short numeroUno;
	short numeroDos;
	short numeroTres;

	cout << "Introduzca tres numeros para hacer la media: " << endl;
	cin >> numeroUno >> numeroDos >> numeroTres;

	cout << "La media de los tres numeros introducidos es: " << (numeroUno + numeroDos + numeroTres) / 3;


}

