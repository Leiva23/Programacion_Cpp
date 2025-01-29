// Crea un programa que pida el radio de un círculo al usuario y con ello calcule su área y perímetro.

#include <iostream>
#include <cmath> 
using namespace std;

void main() {
	float radio;
	double pi = atan(1) * 4;

	cout << "Dame el rado de un circulo en metros: " << endl;
	cin >> radio;

	cout << "El area del circulo es: " << radio * radio * pi << endl << "El perimetro del circulo es: " << 2 * pi * radio << endl;

}
