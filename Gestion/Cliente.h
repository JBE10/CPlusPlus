#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente {
private:
    string nombre;
    int edad;

public:
    Cliente();
    Cliente(string nombre, int edad);
    void setNombre(string nombre);
    void setEdad(int edad);
    string getNombre();
    int getEdad();
    void mostrarDatos();
};

#endif // CLIENTE_H
