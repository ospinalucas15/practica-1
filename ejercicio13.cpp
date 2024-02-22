#include <iostream>

using namespace std;

int ejercicio13(){

    int n = 0;
    int count = 0;
    int suma = 0;

    cout << "Ingrese un numero entero: "; 
    cin >> n;

    for (int i = 2; i <= n; ++i) {
        count = 0;
        for (int j = i; j > 0; --j) {
            if (i % j == 0){
                count += 1;
            }
        }

        if (count <= 2) {
            suma += i;
        }

    }

    cout << "El resultado de la suma es: " << suma << endl;

    return 0;
}