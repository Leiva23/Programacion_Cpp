///*
//Crea un programa que pida un n�mero al usuario, el programa almacenar�
//el n�mero y seguidamente pedir� otro al usuario.Esto debe hacerse
//infinitamente hasta que el usuario quiera, entonces el programa finalizar�
//mostrando todos los n�meros introducidos.
//*/
//
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	short numero;
//	vector <int> numeros;
//
//	while (true) {
//		cout << "Introduce un numero, usa (-1) para detener la ejecucion" << endl;
//		cin >> numero;
//
//		if (numero == -1) {
//			break;
//		
//		}
//
//		numeros.push_back(numero);
//	}
//
//	cout << "Lista numeros: " << endl;
//
//	for (int i = 0; i < numeros.size(); i++) {
//		cout << numeros[i] << " ";
//	}
//
//	return 0;
//}
