// Crea un programa que dada una temperatura en Fahrenheit la convierta en Kelvin.

#include <iostream>
using namespace std;

int main() {

	int temperatura;
	cout << "Dame una temperatura Fahrenheit: " << endl;
	cin >> temperatura;

	cout << "La temperatura en Kelvin es: " << (temperatura - 32) * 5 / 9 + 273.15 << endl;
}