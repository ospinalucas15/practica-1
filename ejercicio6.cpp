#include <iostream>

using namespace std;

int ejercicio6() {

    int n = 0;
    float product = 1;
    float suma = 1;

    cout << "Ingrese un numero: ";
    cin >> n;

    for (int i = n-1; i > 0; --i) {
        product = 1;
        for (int j = 1; j <= i; j++){
            product *= j; 
        }
        suma = suma + (1/product);
    }

    cout << "e es aproximadamente: " << suma << endl;

    return 0;
}