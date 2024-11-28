#include <iostream>
#include <string>
using namespace std;

bool isMayor(int edad) {

    if (edad>=18) {
        return true;
    }
    else {
        return false;
    }
}

bool isPar(int n) {
    if (n%2==0) {
        return true;
    }
    else {
        return false;
    }
}


double dividir(double a,double b) {
    if (b==0) {
        throw "No se puede dividir por cero";
    }
    return a/b;
}

void modificar(int* x) {
    *x=20;
}


int main() {
    int numeros[]={1,2,3,4,5,6,7,8,9,10};
    int* pNumeros=numeros;

    return 0;
}
