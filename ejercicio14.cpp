#include <iostream>
using namespace std;

int ejercicio14() {
    int maxPalindromo = 0;
    int num1 = 0;
    int num2 = 0;

    for (int i = 999; i >= 100; i--) {
        for (int j = i; j >= 100; j--) {
            int producto = i * j;
            int original = producto;
            int invertido = 0;

            while (producto > 0) {
                invertido = invertido * 10 + producto % 10;
                producto /= 10;
            }

            if (original == invertido && original > maxPalindromo) {
                maxPalindromo = original;
                num1 = i;
                num2 = j;
            }
        }
    }

    cout << num1 << "*" << num2 << "=" << maxPalindromo << endl;

    return 0;
}