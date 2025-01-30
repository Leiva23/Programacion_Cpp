// Crea un programa en el que se introducen 3 cifras que representan lo que aportan 3 personas al pagar una cuenta y haz que el programa muestre que % han aportado cada uno sobre el total.
#include <iostream>
using namespace std;

int main (){
	float aporte1;
	float aporte2;
	float aporte3;
	cout << "Cuanto ha aportado Persona 1: " << endl;
	cin >> aporte1;
	cout << "Cuanto ha aportado Persona 2: " << endl;
	cin >> aporte2;
	cout << "Cuanto ha aportado Persona 3: " << endl;
	cin >> aporte3;

	float total = aporte1 + aporte2 + aporte3; 
	cout << "Persona 1 ha aportado: " << (aporte1 * 100) / total << "%" << endl;
	cout << "Persona 1 ha aportado: " << (aporte2 * 100) / total << "%" << endl;
	cout << "Persona 1 ha aportado: " << (aporte2 * 100) / total << "%" << endl;

}