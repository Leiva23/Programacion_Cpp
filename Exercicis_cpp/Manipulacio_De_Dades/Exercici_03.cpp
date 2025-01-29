 // Pregunta por pantalla el nombre del usuario y luego le saludas mencionando su nombre.

#include <iostream>
using namespace std;

void main() {
	string nombre;

	cout << "Qual es tu nombre ? " << endl;
	cin >> nombre;
	cout << "Hola " << nombre << endl;
}