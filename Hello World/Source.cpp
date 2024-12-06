#include <iostream>
using namespace std;



void main() {
	short respuesta1;
	short respuesta2;
	short respuesta3;
	short respuesta4;
	short respuesta5;
	short respuesta6;
	short respuesta7;
	short respuesta8;
	short respuesta9;
	short respuesta10;
	short respuestaExtra;
	short puntuacion = 0;
	short racha = 0;

	cout << "Pregunta 1: Cual es la capital de Italia?" << endl;
	cout << "1.Madrid" << endl << "2.Roma" << endl << "3.Gibraltar" << endl << "4.El Vaticano" << endl;
	cout << "Introduce el numero de la respuesta: ";
	cin >> respuesta1;

	if (respuesta1 == 2) {
		cout << "Respuesta Correcta! (+1p)" << endl;
		racha++;
		puntuacion += racha;
		cout << "Puntuacion: " << puntuacion<< endl;
	}
	else {
		cout << "Respuesta Incorrecta (-1p)" << endl;
		cout << "La Respuesta Correcta era Roma" << endl;
		puntuacion--;
		racha = 0;
		cout << "Puntuacion: " << puntuacion << endl;
	}

	cout << "Pregunta 2: Cual es la capital de Francia?" << endl;
	cout << "1.Berlin" << endl << "2.Roma" << endl << "3.Paris" << endl << "4.Sevilla" << endl;
	cout << "Introduce el numero de la respuesta: ";
	cin >> respuesta2;

	if (respuesta2 == 3) {
		cout << "Respuesta Correcta! (+1p)" << endl;
		racha++;
		puntuacion += racha;
		cout << "Puntuacion: " << puntuacion << endl;
	}
	else {
		cout << "Respuesta Incorrecta (-1p)" << endl;
		cout << "La Respuesta Correcta era Paris" << endl;
		puntuacion--;
		racha = 0;
		cout << "Puntuacion: " << puntuacion << endl;
	}

	cout << "Pregunta 3: Cual es la capital de Japon?" << endl;
	cout << "1.Tokio" << endl << "2.Seul" << endl << "3.Bangkok" << endl << "4.Beijing" << endl;
	cout << "Introduce el numero de la respuesta: ";
	cin >> respuesta3;

	if (respuesta3 == 1) {
		cout << "Respuesta Correcta! (+1p)" << endl;
		racha++;
		puntuacion += racha;
		cout << "Puntuacion: " << puntuacion << endl;
	}
	else {
		cout << "Respuesta Incorrecta (-1p)" << endl;
		cout << "La Respuesta Correcta era Tokio" << endl;
		puntuacion--;
		racha = 0;
		cout << "Puntuacion: " << puntuacion << endl;
	}

	cout << "Pregunta 4: Cual es la capital de Canada?" << endl;
	cout << "1.Toronto" << endl << "2.Ottawa" << endl << "3.Vancouver" << endl << "4.Montreal" << endl;
	cout << "Introduce el numero de la respuesta: ";
	cin >> respuesta4;

	if (respuesta4 == 2) {
		cout << "Respuesta Correcta! (+1p)" << endl;
		racha++;
		puntuacion += racha;
		cout << "Puntuacion: " << puntuacion << endl;
	}
	else {
		cout << "Respuesta Incorrecta (-1p)" << endl;
		cout << "La Respuesta Correcta era Ottawa" << endl;
		puntuacion--;
		racha = 0;
		cout << "Puntuacion: " << puntuacion << endl;
	}

	cout << "Pregunta 5: Cual es la capital de Australia?" << endl;
	cout << "1.Sidney" << endl << "2.Canberra" << endl << "3.Melbourne" << endl << "4.Brisbane" << endl;
	cout << "Introduce el numero de la respuesta: ";
	cin >> respuesta5;

	if (respuesta5 == 2) {
		cout << "Respuesta Correcta! (+1p)" << endl;
		racha++;
		puntuacion += racha;
		cout << "Puntuacion: " << puntuacion << endl;
	}
	else {
		cout << "Respuesta Incorrecta (-1p)" << endl;
		cout << "La Respuesta Correcta era Canberra" << endl;
		puntuacion--;
		racha = 0;
		cout << "Puntuacion: " << puntuacion << endl;
	}

	cout << "Pregunta 6: Cual es la capital de Brasil?" << endl;
	cout << "1.Rio de Janeiro" << endl << "2.Londres" << endl << "3.Brasilia" << endl << "4.Salvador" << endl;
	cout << "Introduce el numero de la respuesta: ";
	cin >> respuesta6;

	if (respuesta6 == 3) {
		cout << "Respuesta Correcta! (+1p)" << endl;
		racha++;
		puntuacion += racha;
		cout << "Puntuacion: " << puntuacion << endl;
	}
	else {
		cout << "Respuesta Incorrecta (-1p)" << endl;
		cout << "La Respuesta Correcta era Brasilia" << endl;
		puntuacion--;
		racha = 0;
		cout << "Puntuacion: " << puntuacion << endl;
	}

	cout << "Pregunta 7: Cual es la capital de Rusia?" << endl;
	cout << "1.Moscu" << endl << "2.San Petersburgo" << endl << "3.Kiev" << endl << "4.Minsk" << endl;
	cout << "Introduce el numero de la respuesta: ";
	cin >> respuesta7;

	if (respuesta7 == 1) {
		cout << "Respuesta Correcta! (+1p)" << endl;
		racha++;
		puntuacion += racha;
		cout << "Puntuacion: " << puntuacion << endl;
	}
	else {
		cout << "Respuesta Incorrecta (-1p)" << endl;
		cout << "La Respuesta Correcta era Moscu" << endl;
		puntuacion--;
		racha = 0;
		cout << "Puntuacion: " << puntuacion << endl;
	}

	cout << "Pregunta 8: Cual es la capital de Sudafrica?" << endl;
	cout << "1.Ciudad del Cabo" << endl << "2.Pretoria" << endl << "3.Johannesburgo" << endl << "4.Durban" << endl;
	cout << "Introduce el numero de la respuesta: ";
	cin >> respuesta8;

	if (respuesta8 == 2) {
		cout << "Respuesta Correcta! (+1p)" << endl;
		racha++;
		puntuacion += racha;
		cout << "Puntuacion: " << puntuacion << endl;
	}
	else {
		cout << "Respuesta Incorrecta (-1p)" << endl;
		cout << "La Respuesta Correcta era Pretoria" << endl;
		puntuacion--;
		racha = 0;
		cout << "Puntuacion: " << puntuacion << endl;
	}

	cout << "Pregunta 9: Cual es la capital de Alemania?" << endl;
	cout << "1.Berlin" << endl << "2.Hamburgo" << endl << "3.Munich" << endl << "4.Frankfurt" << endl;
	cout << "Introduce el numero de la respuesta: ";
	cin >> respuesta9;

	if (respuesta9 == 1) {
		cout << "Respuesta Correcta! (+1p)" << endl;
		racha++;
		puntuacion += racha;
		cout << "Puntuacion: " << puntuacion << endl;
	}
	else {
		cout << "Respuesta Incorrecta (-1p)" << endl;
		cout << "La Respuesta Correcta era Berlin" << endl;
		puntuacion--;
		racha = 0;
		cout << "Puntuacion: " << puntuacion << endl;
	}

	cout << "Pregunta 10: Cual es la capital de Egipto?" << endl;
	cout << "1.El Cairo" << endl << "2.Alejandria" << endl << "3.Luxor" << endl << "4.Asuán" << endl;
	cout << "Introduce el numero de la respuesta: ";
	cin >> respuesta10;

	if (respuesta10 == 1) {
		cout << "Respuesta Correcta! (+1p)" << endl;
		racha++;
		puntuacion += racha;
		cout << "Puntuacion: " << puntuacion << endl;
	}
	else {
		cout << "Respuesta Incorrecta (-1p)" << endl;
		cout << "La Respuesta Correcta era El Cairo" << endl;
		puntuacion--;
		racha = 0;
		cout << "Puntuacion: " << puntuacion  << endl;
	}

	if (puntuacion <= 20) {

		cout << "Pregunta extra: De que pais es capital Kyiv" << endl;
		cout << "1.Russia" << endl << "2.Mexico" << endl << "3.Luxemburgo" << endl << "4.Ucrania" << endl;
		cout << "Introduce el numero de la respuesta: ";
		cin >> respuestaExtra;

		if (respuestaExtra == 4) {
			cout << "Respuesta Correcta! Has ganado!!!!" << endl;
		}
		else {
			cout << "Respuesta Incorrecta (-1p)" << endl;
			cout << "La Respuesta Correcta era Ucrania" << endl;
			cout << "Puntuacion: " << puntuacion << endl;
			cout << "Has perdido!" << endl;
		}
	}
}	

