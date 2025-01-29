// Crea un programa que pida un número al usuario y muestra su valor negado (Si introduce 1 debe mostrar - 1 y si introduce - 1 debe mostrar 1).
#include <iostream>
using namespace std;

void main() {
	short numero;
	short valorNegado;
	cout << "Dame un numero" << endl;
	cin >> numero;

	cout << "Valor negado: " << numero * -1;

}