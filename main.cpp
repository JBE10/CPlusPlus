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
    int n;
    cout<<"Ingrese un numero: ";
    cin>>n;
    int* lista=new int[n];

    for (int i;i<n;i++) {
        lista[i]=i*2;
    }
    cout<<endl;

    delete[] lista;




    return 0;
}
