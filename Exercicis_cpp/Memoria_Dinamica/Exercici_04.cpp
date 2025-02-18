/*
Crea un programa que pida indefinidamente números al usuario hasta que
este quiera parar. El programa debe de separar los números pares e
impares en distintas estructuras de almacenamiento. Al final imprimirá los
números pares y luego los impares.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector <int> numerosPares;
	vector <int> numerosImpares;
	short numero;
	
	while (true) {
		cout << "Introduce un numero, para detenerlo introduce (-1)" << endl;
		cin >> numero;

		if (numero == -1){
			break;

		}
		else if (numero % 2 != 0) {
			numerosImpares.push_back(numero);
		
		}
		else if	(numero % 2 == 0) {
				numerosPares.push_back(numero);
			
		}

	}

	cout << "Numeros Pares: ";
	for (int i = 0; i < numerosPares.size(); i++) {
		cout << numerosPares[i] << " ";
	}

	cout << "Numeros Impares: ";
	for (int i = 0; i < numerosImpares.size(); i++) {
		cout << numerosImpares[i] << " ";
	}

	return 0;
}