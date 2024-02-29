#include <iostream>

using namespace std;


int ejercicio12() {
    
    int factor = 2;
    int numero = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;
    
    int numero2 = numero;


    while (numero > 1) {
        while (numero % factor == 0) {
            numero /= factor;
        }

        ++factor;
    }

    cout << "El mayor factor primo de " << numero2 << " es: " << factor-1 << endl;

    return 0;
}