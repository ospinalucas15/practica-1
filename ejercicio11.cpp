#include <iostream>
using namespace std;

int ejercicio11() {
    int numero;
    cout << "Ingresa un número: ";
    cin >> numero;

    int mcmTotal = 1; 
    for (int i = 2; i <= numero; i++) {
        int a = mcmTotal;
        int b = i;
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        mcmTotal = (mcmTotal / a) * i;    
    }

    cout << "El minimo comun multiplo es: " << mcmTotal << endl;
    return 0;

}
