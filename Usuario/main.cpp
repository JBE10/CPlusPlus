#include <iostream>
#include <string>
#include "../Gestion/Cliente.h"
using namespace std;

bool isMayor(int edad) {
    return edad >= 18;
}

bool isPar(int n) {
    return n % 2 == 0;
}

double dividir(double a, double b) {
    if (b == 0) {
        throw runtime_error("No se puede dividir por cero");
    }
    return a / b;
}

void modificar(int* x) {
    *x = 20;
}

int main() {
    Cliente n1;
    cout << "Ingrese el nombre del cliente: ";
    string nombre;
    cin.ignore(); // Limpiar el buffer
    getline(cin, nombre);
    n1.setNombre(nombre);

    cout << "Ingrese la edad del cliente: ";
    int edad;
    cin >> edad;
    n1.setEdad(edad);

    n1.mostrarDatos();

    if (isMayor(edad)) {
        cout << "El cliente es mayor de edad." << endl;
    } else {
        cout << "El cliente es menor de edad." << endl;
    }

    return 0;
}
