// Crea un programa que reciba dos números y ejecute las operaciones matemáticas(suma, resta, multiplicación, división, módulo) mostrando su resultado por pantalla.
#include <iostream>
using namespace std;

void main() {
	short numeroUno;
	short numeroDos;

	cout << "Dame dos numeros" << endl;
	cin >> numeroUno >> numeroDos;  

	cout << "Suma: " << numeroUno + numeroDos << "\t" << "Resta: " << numeroUno - numeroDos << "\t" << "Multiplicacion:	" << numeroUno * numeroDos << "\t" << "Division: " << numeroUno / numeroDos << "\t" << "Modulo: " << numeroUno % numeroDos;

}