#include <iostream>
#include <cmath>

using namespace std;

int ejercicio9(){

    int n = 0;
    int suma = 0;

    cout << "Ingrese un numero: ";
    cin >> n;

    if (n < 0) {
        n *= -1;
    }

    int dig = n;

    while (n != 0) {
        dig = n % 10;
        n = (n - dig)/10;

        suma = suma + (pow(dig, dig));
    }

    cout << "El resultado de la suma es: " << suma << endl;

    return 0;
}