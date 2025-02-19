/*
 Crea un programa que permita llevar el control de ventas de una tienda. El
programa permitirá introducir una venta o consultar ventas. Para cada
cliente registrará los productos vendidos, cantidad de ellos e ingresos. En la
consulta de ventas mostrará para cada producto vendido la cantidad,
ingresos generados por producto e ingresos totales.
*/

#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;


struct Venta {
    string nombreProducto = "";
    int cantidad = 0;
    float ingreso = 0;

};



int main() {
  
    list <Venta> ventas;
    int input = 0;

    do {
        cout << "\n Control de Ventas: " << endl;
        cout << "1. Introducir una venta" << endl;
        cout << "2. Consultar ventas" << endl;
        cout << "3. Salir\n" << endl;
        cout << "Selecciona una opcion: " << endl;
        cin >> input;

        switch (input){
        case 1:
        {
            // Registra venta
            Venta productoInsertar;

            //Nombre
            cout << "\n Ingrese el nombre del producto: ";
            string nombre;
            cin >> nombre;
            productoInsertar.nombreProducto = nombre;

            //Cantidad
            cout << "Ingrese la cantidad vendida: ";
            int cantidad;
            cin >> cantidad;
            productoInsertar.cantidad = cantidad;

            //Ingreso
            cout << "Ingrese los ingresos: ";
            float ingresos;
            cin >> ingresos;
            productoInsertar.ingreso = ingresos;
        }
    break;
        case 2: 
        {
            // Consultar Ventas
            if (!ventas.empty()) {
                for (list<Venta>::iterator it = ventas.begin(); it != ventas.end(); it = next(it))
                {
                    Venta ventas = *it;
                    cout << ventas.nombreProducto;
                }
            }
            else {
                cout << "No existen ventas" << endl;
            }
   
        }
        case 3: 
        {

            break;
        }
        default: 
        {
            break;
        
        }
        }

    } while (true);
}
