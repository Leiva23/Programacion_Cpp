//   Crea un programa que al iniciar pedirá el número de DNI y la letra por separado.El programa debe de confirmar si la letra insertada corresponde con el número de DNI.

#include <iostream>
using namespace std;

void main() {
	int numeroDNI;
	char letraDNI;
	int restoDNI;

	cout << "Introduzca el numero de su DNI sin la letra: ";
	cin >> numeroDNI;
	cout << "Introduzca la letra de su DNI (en mayuscula): ";
	cin >> letraDNI;

	restoDNI = numeroDNI % 23;

	if (restoDNI == 0 && letraDNI == 'T')
	{
		cout << "La letra de su DNI es correcta." << endl;
	}
	else if (restoDNI == 1 && letraDNI == 'R')
	{
		cout << "La letra de su DNI es correcta." << endl;
	}
	else if (restoDNI == 2 && letraDNI == 'W')
	{
		cout << "La letra de su DNI es correcta." << endl;
	}
	else if (restoDNI == 3 && letraDNI == 'A')
	{
		cout << "La letra de su DNI es correcta." << endl;
	}
	else if (restoDNI == 4 && letraDNI == 'G')
	{
		cout << "La letra de su DNI es correcta." << endl;
	}
	else if (restoDNI == 5 && letraDNI == 'M')
	{
		cout << "La letra de su DNI es correcta." << endl;
	}
	else if (restoDNI == 6 && letraDNI == 'Y')
	{
		cout << "La letra de su DNI es correcta." << endl;
	}
	else if (restoDNI == 7 && letraDNI == 'F')
	{
		cout << "La letra de su DNI es correcta." << endl;
	}
	else if (restoDNI == 8 && letraDNI == 'P')
	{
		cout << "La letra de su DNI es correcta." << endl;
	}
	else if (restoDNI == 9 && letraDNI == 'D')
	{
		cout << "La letra de su DNI es correcta." << endl;
	}
	else if (restoDNI == 10 && letraDNI == 'X')
	{
		cout << "La letra de su DNI es correcta." << endl;
	}
	else if (restoDNI == 11 && letraDNI == 'B')
	{
		cout << "La letra de su DNI es correcta." << endl;
	}
	else if (restoDNI == 12 && letraDNI == 'N')
	{
		cout << "La letra de su DNI es correcta." << endl;
	}
	else if (restoDNI == 13 && letraDNI == 'J')
	{
		std::cout << "La letra de su DNI es correcta." << endl;
	}
	else if (restoDNI == 14 && letraDNI == 'Z')
	{
		cout << "La letra de su DNI es correcta." << endl;
	}
	else if (restoDNI == 15 && letraDNI == 'S')
	{
		cout << "La letra de su DNI es correcta." << endl;
	}
	else if (restoDNI == 16 && letraDNI == 'Q')
	{
		cout << "La letra de su DNI es correcta." << endl;
	}
	else if (restoDNI == 17 && letraDNI == 'V')
	{
		cout << "La letra de su DNI es correcta." << endl;
	}
	else if (restoDNI == 18 && letraDNI == 'H')
	{
		cout << "La letra de su DNI es correcta." << endl;
	}
	else if (restoDNI == 19 && letraDNI == 'L')
	{
		cout << "La letra de su DNI es correcta." << endl;
	}
	else if (restoDNI == 20 && letraDNI == 'C')
	{
		cout << "La letra de su DNI es correcta." << endl;
	}
	else if (restoDNI == 21 && letraDNI == 'K')
	{
		cout << "La letra de su DNI es correcta." << endl;
	}
	else if (restoDNI == 22 && letraDNI == 'E')
	{
		cout << "La letra de su DNI es correcta." << endl;
	}
	else
	{
		cout << "La letra de su DNI es incorrecta." << endl;
	}
}