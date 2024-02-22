#include <iostream>

using namespace std;

int ejercicio5() {

    int n = 0;

    cout << "Ingrese un numero impar: ";
    cin >> n; 

    int medio = (n + 1)/2;
    int limi = medio;
    int lims = medio;

    for (int i = 1; i <= medio; i++) {

        for (int j = 1; j <= n; ++j){
            if (j >= limi && j <= lims){
                cout << "*";
            }

            else {
                cout << " ";
            }
        }

        cout << endl;

        --limi;
        ++lims;
    }

    ++limi;
    --lims;

    for (int i = 1; i <= medio-1; i++) {

        ++limi;
        --lims;

        for (int j = 1; j <= n; ++j){
            if (j >= limi && j <= lims) {
                cout << "*";
            }

            else {
                cout << " ";
            }


        }

        cout << endl;
    }

    return 0;
}