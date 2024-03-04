#include <iostream>
#include <cmath>
using namespace std;

int ejercicio17() {
    int k;
    cout << "Ingrese un número k para encontrar el primer número triangular con más de k divisores: ";
    cin >> k;

    int contadorDivisores = 0;
    int numeroTriangular = 0;
    int i = 1;

    while (contadorDivisores <= k) {
        numeroTriangular += i;
        
        contadorDivisores = 0;
        for (int j = 1; j <= sqrt(numeroTriangular); j++) {
            if (numeroTriangular % j == 0) {
                if (numeroTriangular / j == j) {
                    contadorDivisores += 1;
                } else {
                    contadorDivisores += 2;
                }
            }
        }

        i++; 
    }

    
    cout << "El número es: " << numeroTriangular << " que tiene " << contadorDivisores << " divisores." << endl;

    return 0;
}