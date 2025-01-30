// Crea un programa que dada una temperatura en Fahrenheit la convierta en Celsius.

#include <iostream>
using namespace std;

int main() {

	int temperatura;

	cout << "Dame una temperatura Fahrenheit: " << endl;
	cin >> temperatura;

	cout << "La temperatura en Celsius es: " << (temperatura - 32) * 5 / 9 << endl;

}