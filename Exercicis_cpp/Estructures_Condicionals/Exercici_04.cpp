//  Crea un programa que determine si un año introducido por el usuario es bisiesto o no.

#include <iostream>
using namespace std;

void main() {
	int anyo;

	cout << "Introduce un anyo: " << endl;
	cin >> anyo;

	if (anyo % 4== 0) {
		cout << "El anyo es bisiesto";
	}else {
		cout << "Este anyo no es bisiesto"; 
	}
}