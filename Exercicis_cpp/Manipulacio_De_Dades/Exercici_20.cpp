//  Crea un programa que al introducir una cantidad de milisegundos muestre la cantidad de horas, minutos y segundos que representa.

#include <iostream>
using namespace std;


int main() {
	int milisegundos;

	cout << "Milisegundos: " << endl;
	cin >> milisegundos;

	cout << "La hora en la que nos encontramos es: " << milisegundos / 3600 / 1000 << " h " << milisegundos / 1000 % 3600 / 60 << " m " << milisegundos / 1000 % 60 << " s." << endl;

}