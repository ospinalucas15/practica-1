#include <iostream>

using namespace std;

int ejercicio15() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    int suma = 1; 
    int esquina = 1; 

    for (int capa = 3; capa <= n; capa += 2) {
        int incremento = capa - 1;
        for (int i = 0; i < 4; ++i) {
            esquina += incremento; 
            suma += esquina; 
        }
    }


    cout << "En la espiral de " << n << 'x' << n << ", la suma es: " << suma << endl;

    return 0;
}