#include "Cliente.h"
#include <iostream>
using namespace std;

Cliente::Cliente() : nombre(" "), edad(0) {}
Cliente::Cliente(string nombre, int edad) : nombre(nombre), edad(edad) {}

void Cliente::setNombre(string nombre) {
    this->nombre = nombre;
}

void Cliente::setEdad(int edad) {
    this->edad = edad;
}

string Cliente::getNombre() {
    return nombre;
}

int Cliente::getEdad() {
    return edad;
}

void Cliente::mostrarDatos() {
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}
