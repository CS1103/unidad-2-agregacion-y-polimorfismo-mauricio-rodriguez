//
// Created by mauri on 19/09/2019.
//

#include "Revista.h"

Revista::Revista(string &string, int &i, int &numRevistas) : Volumen(string, i), numRevistas(numRevistas) {}

void Revista::mostrar() {
    Volumen::mostrar();
}
