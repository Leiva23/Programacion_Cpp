// Crea un programa que se le introduzca un día, un mes y un año y calcule cuantos segundos han pasado desde el 1 de enero del año 0.

#include <iostream>
using namespace std;

int main() {
	short anyo;
	short mes;
	short dia;

	cout << "Dime un año: " << endl;
	cin >> anyo;
	cout << "Dime un mes: " << endl;
	cin >> mes;
	cout << "Dime un dia: " << endl;
	cin >> dia;

	cout << "Ha pasado este tiempo en segundos: " << (anyo * 365 + ((mes - 1) * 30) + dia) * 24 * 3600 << " segundos.";


}