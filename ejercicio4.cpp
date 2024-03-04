#include <iostream>

using namespace std;

int ejercicio4(){

    int n1 = 0;
    int n2 = 0;
    int ultdig1 = 0;
    int ultdig2 = 0;
    int ultdig3 = 0;
    int primdig1 = 0;
    int primdig2 = 0;
    int primdig3 = 0;

    cout << "Ingrese la hora del dia: ";
    cin >> n1;
    cout << "Ingrese la duracion: ";
    cin >> n2;

    ultdig1 = n1 % 100;
    ultdig2 = n2 % 100;
    primdig1 = n1 / 100;
    primdig2 = n2 / 100;


    if ((ultdig1 > 59)){
        cout << n1 << " Es un numero invalido" << endl;
        return 0;
    }

    if ((n1/100) > 23){
        cout << n1 << " Es un numero invalido" << endl;
        return 0;
    }


    if ((ultdig2 > 59)){
        cout << n2 << " Es un numero invalido" << endl;
        return 0;
    }

    if ((n2/100) > 23){
        cout << n2 << " Es un numero invalido" << endl;
        return 0;
    }

    if ((primdig1 + primdig2) > 23){
        primdig3 = (primdig1 + primdig2) - 24;
    }
    else {
        primdig3 = primdig1 + primdig2;
    }

    if ((ultdig2 + ultdig1) > 59){
        ultdig3 = (ultdig2 + ultdig1) - 60;
        primdig3 = primdig1 + primdig2 + 1;
    }
    else {
        ultdig3 = ultdig2 + ultdig1;
    }

    if (primdig3 > 23){
        primdig3 -= 1;
        cout << "La hora es " << "00"; 
    }

    else { 
        cout << "La hora es " << primdig3; 
    }

    if (ultdig3 == 0) {
        cout << "0";
        cout << ultdig3 << endl;
    }
    else {
        cout << ultdig3 << endl;
    }

 
    return 0;
}