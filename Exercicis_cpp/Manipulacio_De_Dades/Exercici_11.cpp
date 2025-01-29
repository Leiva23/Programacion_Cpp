// Crea un programa que haga la conversación de € a ¥, $ y £ usando valores actuales.

#include <iostream>
using namespace std;

void main() {
	float euro;
	float tasaUSD = 1.04;  
	float tasaJPY = 161.60; 
	float tasaGBP = 0.84;

	cout << "Introduceme la cantidad de euros para realizar la conversion" << endl;
	cin >> euro;

	cout << "Conversion a dolares: " << euro * tasaUSD << " dolares" << endl;
	cout << "Conversion a yenes japoneses: " << euro * tasaJPY << " yenes" << endl; 
	cout << "Conversion actual a libras esterlinas: " << euro * tasaGBP << " libras" << endl; 

}
