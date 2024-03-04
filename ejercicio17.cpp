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

    // Continuar hasta que encontramos un número triangular con más de k divisores
    while (contadorDivisores <= k) {
        // Generar el siguiente número triangular
        numeroTriangular += i;
        
        // Contar divisores del número triangular actual
        contadorDivisores = 0;
        for (int j = 1; j <= sqrt(numeroTriangular); j++) {
            if (numeroTriangular % j == 0) {
                // Si los divisores son iguales, contarlos solo una vez
                if (numeroTriangular / j == j) {
                    contadorDivisores += 1;
                } else {
                    contadorDivisores += 2;
                }
            }
        }

        i++; // Pasar al siguiente número para generar el próximo número triangular
    }

    // Ahora tenemos el primer número triangular con más de k divisores
    cout << "El número es: " << numeroTriangular << " que tiene " << contadorDivisores << " divisores." << endl;

    return 0;
}