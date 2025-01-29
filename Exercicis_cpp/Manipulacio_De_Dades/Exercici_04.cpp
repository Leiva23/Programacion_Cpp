//  Pregúntale al usuario por su nombre, su edad y su comida favorita. A continuación muestra por pantalla los 3 datos en orden.

#include <iostream>
using namespace std;

void main() {
	string nombre;
	short edad;
	string comidaFav;

	cout << "Cual es tu nombre?";
	cin >> nombre; 
	cout << "Cual es tu edad?";
	cin >> edad; 
	cout << "Cual es tu comida favorita?";
	cin >> comidaFav; 

	cout << nombre << "\t" << edad << "\t" << comidaFav; 

}