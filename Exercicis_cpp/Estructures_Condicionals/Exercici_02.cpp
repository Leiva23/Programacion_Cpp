// Crea un programa que determine si un número introducido por el usuario es positivo, negativo o cero
#include <iostream>
using namespace std;

void main() {
	short numero;
	cout << "Introduce un numero: " << endl;
	cin >> numero;

	if (numero > 0) {
		cout << "El numero es positivo";

	}
	else if (numero == 0){
		cout << "Este numero es 0: ";
	}else {
		cout << "Este numero es negativo";
	}

}