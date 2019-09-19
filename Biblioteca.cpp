//
// Created by mauri on 19/09/2019.
//

#include "Biblioteca.h"

Biblioteca::Biblioteca(int &maxLibros, int &maxRevistas) : maxLibros(maxLibros), maxRevistas(maxRevistas) {}

void Biblioteca::mostrarBiblioteca() {

}

bool Biblioteca::incluir(Volumen &) {
    return false;
}
