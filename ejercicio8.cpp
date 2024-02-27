#include <iostream>

using namespace std;

int ejercicio8() {

    int a, b, c = 0;
    int mult = 1;
    int suma = 0;
    int i = 1;

    cout << "Ingrese el numero a: ";
    cin >> a;
    cout << "Ingrese el numero b: ";
    cin >> b;
    cout << "Ingrese el numero c: ";
    cin >> c;

    while ((i * a) <= c) {
        mult = i * a;
        suma += mult;

        cout << mult;

        if (((i+1) * a) <= c) {
            cout << "+";
        }

        i++;
    }

    i = 1;
    mult = 0;

    while ((i * b) <= c){

        if ((i * b) % a == 0){
            for (int j = 1; (j*a) <= c; j++) {
                if ((j * a) == (i * b)){
                    i++;
                }
            }

        }
        if ((i * b) <= c) {
            mult = i * b;
            suma += mult;

            cout << "+" << mult;
        }

        i++;

    }

    cout << " = " << suma << endl;

    return 0;
}
