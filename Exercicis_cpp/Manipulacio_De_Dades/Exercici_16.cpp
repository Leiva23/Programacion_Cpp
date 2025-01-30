// Crea un programa que pida al usuario una distancia en metros y muestre su equivalente en millas, yardas, pies y pulgadas(Sistema Imperial).

#include <iostream>
using namespace std;

int main() {
	short metros;

	cout << "Dame una distancia en metros: " << endl;
	cin >> metros;

	cout << metros * 39.3701 / 12 / 3 / 1760 << " millas." << endl;
	cout << metros * 39.3701 / 12 / 3 << " yardas." << endl;
	cout << metros * 39.3701 / 12  << " pies." << endl; 
	cout << metros * 39.3701 << " pulgadas." << endl;

}