#include <iostream>

using namespace std;

int ejercicio10(){

    int n = 0;
    int count = 0;
    int isPrime = 0;
    bool flag = true;
    int i = 1;

    cout << "Ingrese un numero entero: "; 
    cin >> n;

    while (flag == true) {
        ++i;
        count = 0;
        for (int j = i; j > 0; --j){
            if (i % j == 0){
                count += 1;
            }
        }

        if (count <= 2) {
            isPrime += 1;
        }


        if (isPrime == n) {
            flag = false;
        }

    }

    cout << "El primo numero " << n << " es: " << i << endl;

    return 0;
}