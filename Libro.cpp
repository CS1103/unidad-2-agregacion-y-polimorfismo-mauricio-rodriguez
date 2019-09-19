//
// Created by mauri on 19/09/2019.
//

#include "Libro.h"

Libro::Libro(string &string, int &i, int &numLibros) : Volumen(string, i), numLibros(numLibros) {}

void Libro::mostrar() {
    Volumen::mostrar();
}
