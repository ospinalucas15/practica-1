#include <iostream>

using namespace std;

int ejercicio1() {

    char letra = 0;

    cout << "Ingrese una letra: ";
    cin >> letra; 

    if (!(letra >= 65 && letra <= 90) && !(letra >= 97 && letra <= 122)) {

        cout << "No es una letra" << endl;
        return 0;
    }
    
    else {

        
        if (letra == 65 || letra == 97){
            cout << letra << " es una vocal" << endl;
        }

        else if (letra == 69 || letra == 101){
            cout << letra << " es una vocal" << endl;
        }

        else if (letra == 73 || letra == 105){
            cout << letra << " es una vocal" << endl;
        }

        else if (letra == 79 || letra == 111){
            cout << letra << " es una vocal" << endl;
        }

        else if (letra == 85 || letra == 117){
            cout << letra << " es una vocal" << endl;
        }

        else {
            cout << letra << " es una consonante" << endl;
        }
    }

    return 0;
} 