//  Crea un programa que pida al usuario un número del 1 al 12 e imprima la cantidad de días que tiene ese mes.

#include <iostream>
using namespace std;

int main() {
	short mes;

	cout << "Dime un numero del 1 al 12" << endl;
	cin >> mes; 

	switch (mes) {

	case 1: 
		cout << "Enero tiene 31 dias";
		break;
	case 2:
		cout << "Febrero puede tener 28 0 31 dias";
		break;
	case 3:
		cout << "Marzo tiene 31 dias";
		break;
	case 4:
		cout << "Abril tiene 30 dias";
		break;
	case 5:
		cout << "Mayo tiene 31 dias";
		break;
	case 6:
		cout << "Junio tiene 30 dias";
		break;
	case 7:
		cout << "Julio tiene 31 dias";
		break;
	case 8:
		cout << "Agosto tiene 31 dias";
		break;
	case 9:
		cout << "Septiembre tiene 30 dias";
		break;
	case 10:
		cout << "Octubre tiene 31 dias";
		break;
	case 11:
		cout << "Noviembre tiene 30 dias";
		break;
	case 12:
		cout << "Diciembre tiene 31 dias";
		break;
	default:
		cout << "Mes no existente";
	}
}