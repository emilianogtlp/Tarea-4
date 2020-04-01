#include <iostream>
#include <fstream>
#include <string>
#include "Empleado.h"
using namespace std;

int checar(int id, int k, Empleado arr[]) {
    int o = 1;
    int v = 0;
    while (o == 1) {
        for (int x = 0; x < k; x++) {
            if (arr[x].getId_empleado() == id) {
                v++;
                o++;
                return x;
            }
        }
        if (v == 0) {
            cout << " Ha ingresado un ID invalida, por favor intentelo de nuevo: " << endl;
            cin >> id;
        }
    }
}

int main()
{
    int i = 0;
    int a, d, menu,ver = 0, ID, horas, num_empleado;
    int ejecutador = 1;
    double c, b, sueldo_fijo = 0, sueldo_xhora = 0, paga = 0;
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
    //cout << arreglo_empleados[6].getId_empleado() << endl;
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
            cout << "Por favor introduzca un ID: " << endl;
            cin >> ID;
            num_empleado = checar(ID, i, arreglo_empleados);
            cout << "Ingrese el nuevo sueldo fijo: " << endl;
            cin >> sueldo_fijo;
            arreglo_empleados[num_empleado].setSueldo_fijo(sueldo_fijo);
            break;
        case 2:
            cout << "Por favor introduzca un ID: " << endl;
            cin >> ID;
            num_empleado = checar(ID, i, arreglo_empleados);
            cout << "Ingrese el valor del nuevo sueldo x hora: " << endl;
            cin >> sueldo_xhora;
            while (sueldo_xhora < 0) {
                cout << "Ha ingresado un valor invalido, por favor ingrese otro valor: " << endl;
                cin >> sueldo_xhora;
            }
            arreglo_empleados[num_empleado].setSueldo_xhora(sueldo_xhora);
            break;
        case 3:
            cout << "Por favor introduzca un ID: " << endl;
            cin >> ID;
            num_empleado = checar(ID, i, arreglo_empleados);
            cout << "Ingrese el numero de horas que desea registrar: " << endl;
            cin >> horas;
            while (horas < 0) {
                cout << "Ha ingresado un numero invalido de horas, por favor intentelo de nuevo: " << endl;
                cin >> horas;
            }
            arreglo_empleados[num_empleado].registrohoras(horas);
            break;
        case 4:
            cout << "Por favor introduzca un ID: " << endl;
            cin >> ID;
            num_empleado = checar(ID, i, arreglo_empleados);
            paga = arreglo_empleados[num_empleado].calculapago();
            cout << "El pago que le corresponde al empleado con ID: " << ID << " es de: " << paga << endl;
            break;
        case 5:
            cout << "ID     Sueldo fijo      Sueldo x Hora     Horas trabajadas     Paga" << endl;
            for(int x = 0 ; x<i ; x++)
            {
                cout << arreglo_empleados[x].getId_empleado() << "        ";
                cout << arreglo_empleados[x].getSueldo_fijo() << "               ";
                cout << arreglo_empleados[x].getSueldo_xhora() << "                     ";
                cout << arreglo_empleados[x].getHoras_trabajadas() << "       ";
                cout << arreglo_empleados[x].calculapago()<<endl;
            }
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


