#include <iostream>
#include <fstream>
#include <string>
#include "Empleado.h"
using namespace std;
int main()
{
    int i = 0;
    int a, d, menu,ver,id;
    int ejecutador = 1;
    double c, b;
    Empleado arreglo_empleados[20];
    ifstream archivo_empleados;
    archivo_empleados.open("Text.txt");
    while (archivo_empleados >> a >> b >> c >> d)
    {
        arreglo_empleados[i].setId_empleado(a);
        arreglo_empleados[i].setHoras_trabajadas(d);
        arreglo_empleados[i].setSueldo_fijo(b);
        arreglo_empleados[i].setSueldo_xhora(c);
        i++;
    }
    while (ejecutador == 1) {
        cout << "/////////////// Menu ///////////////" << endl;
        cout << " 1.- Modificar sueldo fijo. " << endl;
        cout << " 2.- Modificar sueldo por hora. " << endl;
        cout << " 3.- Registra horas trabajadas. " << endl;
        cout << " 4.- Calcular pago del empleado. " << endl;
        cout << " 5.- Ver lista empleados. " << endl;
        cout << " 6.- Salir. " << endl;
        cin >> menu;
        switch (menu)
        {
        case 1:
            cout << "Por favor induzca un ID: " << endl;
            cin >> id;
            while (ver != 1)
            {
                for (int x = 0; x <= i; x++)
                {
                    if (arreglo_empleados[x].getId_empleado == id) {
                        ver = 1;
                        // aqui se ingresa el codigo de modificacion
                    }
                }
                if (ver != 1) {
                    cout << "Ha ingresado un ID invalido, porfavor ingrese otro ID: " << endl;
                    cin >> id;
                }
            }
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:
            break;
        case 6:
            ejecutador++;
            break;
        default:
            cout << " Opcion invalida, porfavor ingrese otra opcion. " << endl;
            break;
        }




    }
    return 0;
}


