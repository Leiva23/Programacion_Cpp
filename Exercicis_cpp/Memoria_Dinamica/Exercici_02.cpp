/*
Crea un programa que pida una cifra al usuario. El programa generará
aleatoriamente y almacenará tantas cifras como haya indicado el usuario.
Tras ello mostrará todas las cifras generadas.
*/

#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	vector<int> numeros;
	short numero;

	cout << "Introduce un numero para generar una cantidad aleatoria de numeros" << endl;
	cin >> numero;

	for (int i = 0; i < numero; i++) {
		
		short random = rand() % numero;
		numeros.push_back(random); 
	}

	cout << "Lista: " << endl;
	for (int i = 0; i < numeros.size(); i++) {
		cout << numeros[i] << " ";
	}

	return 0;
}
