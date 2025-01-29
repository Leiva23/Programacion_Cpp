// Crea un programa que al introducir una velocidad en km/h y un tiempo en horas nos indique que distancia habremos recorrido en m.

#include <iostream>
using namespace std;

void main() {
	
	short velocidad;
	short tiempo;

	cout << "Introduce una velocidad en km/h: ";
	cin >> velocidad;
	cout << "Introduce el tiempo en h: ";
	cin >> tiempo;

	cout << "La distancia recorrida en metros es: " << velocidad * tiempo * 1000 << "metros";
}