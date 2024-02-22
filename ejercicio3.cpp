#include <iostream>

using namespace std;

int ejercicio3(){

    int dia = 0;
    int mes = 0;

    cout << "Ingrese el dia: ";
    cin >> dia;
    cout  << "Ingrese el mes: ";
    cin >> mes; 

    if (!(mes >= 0 && mes <= 12)) {
        cout << mes << " no es un mes valido" << endl;
        return 0; 
    }

    if (!(dia >= 1 && dia <= 31)) {
        cout << dia << " no es un dia valido" << endl;
        return 0;
    }

    else {

        if (dia == 31 && ((mes % 2) == 0)){
            cout << dia << "/" << mes << " es una fecha invalida" << endl;
        }

        else if (dia == 29) {
            cout << dia << "/" << mes << " valida en bisiesto" << endl;
        }

        else {
            cout << dia << "/" << mes << " es una fecha valida" << endl;
        }
    }


    return 0;
}