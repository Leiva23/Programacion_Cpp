// Crea un programa que pida al usuario una temperatura en grados Celsius y la pase a Fahrenheit y Kelvin.

#include <iostream>
using namespace std;

int main() {
	float grados;

	cout << "Dame una temperatura en grados celsius: " << endl;
	cin >> grados;

	cout << "Temperatura en Fahrenheit: " << (grados * 9 / 5) + 32 << " F" << endl << "Temperautra en Kelvin: " << grados + 273.15 << " K" << endl;

}