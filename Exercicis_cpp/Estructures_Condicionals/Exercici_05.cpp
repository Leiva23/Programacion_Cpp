// Crea un programa que pida al usuario dos números pares y si ambos lo son sume, de lo contrario reste.

#include <iostream>
using namespace std;

void main() {
	int numeroUno;
	int numeroDos;
	
	cout << "Dame un numero: " << endl;
	cin >> numeroUno;
	cout << "Dame otro numero: " << endl;
	cin >> numeroDos; 

	if (numeroUno % 2 == 0 && numeroDos % 2 == 0) {
		cout << "La suma de los numeros es: " << numeroUno + numeroDos;
	}
	else {
		cout << "La resta de los numeros es: " << numeroUno - numeroDos;
	}
}