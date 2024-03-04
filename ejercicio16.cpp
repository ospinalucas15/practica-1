#include <iostream>
using namespace std;

int ejercicio16() {
    int k;
    cout << "Ingrese un número: ";
    cin >> k;

    int maxLongitud = 0;
    int semillaMaxLongitud = 0;

    for (int j = 1; j < k; j++) {
        int longitud = 1; // Contamos el número inicial en la serie
        long long n = j; // Usamos long long para evitar overflow durante los cálculos
        
        // Generamos la serie de Collatz y contamos su longitud
        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
            } else {
                n = 3 * n + 1;
            }
            longitud++;
        }

        // Comprobamos si la longitud actual es la más larga
        if (longitud > maxLongitud) {
            maxLongitud = longitud;
            semillaMaxLongitud = j;
        }
    }

    cout << "La serie más larga es con la semilla: " << semillaMaxLongitud;
    cout << ", teniendo " << maxLongitud << " términos." << endl;

    return 0;
}