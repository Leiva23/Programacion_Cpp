// 3. Crea un programa que pida un número al usuario y compute su factorial.

#include <iostream>
using namespace std;

void main() {
	int numero;
	long factorial = 1;

	cout << "Dame un numero:" << endl; 
	cin >> numero; 
	for (int i = 1; i <= numero; i++) {

		factorial *= i;
	}

		cout << "El numero factorial es: " << factorial;

}