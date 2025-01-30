// Crea un programa que pida la hora, minutos y segundos actuales al usuario y muestre el resultado en milisegundos.

#include <iostream>
using namespace std;


int main() {
	int horas;
	int minutos;
	int segundos;

	cout << "Dame la hora en la que estamos: " << endl;
	cin >> horas;
	cout << "Dame los minutos en los que estamos: " << endl;
	cin >> minutos;
	cout << "dame los segundos en los que estamos" << endl;
	cin >> segundos;

	cout << "La hora en la que nos encontramos en milisegundos es: " << (horas * 60 * 60 + minutos * 60 + segundos) * 1000 << " milisegundos" << endl;

}