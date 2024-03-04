#include <iostream>

using namespace std;

int ejercicio7() {

    int n1 = 1;
    int sumaF = 1;
    int aux = 0;
    int sumaP = 0;
    bool flag = true;
    int count = 0;

    int n = 0;

    cout << "Ingrese un numero: ";
    cin >> n;


    while (sumaF < n) {
        aux = sumaF;
        sumaF += n1;
        n1 = aux;

        if (sumaF % 2 == 0) {
            sumaP += sumaF; 
        }
    }

    cout << "El resultado de la suma es: " << sumaP << endl;


    return 0;
}
