//
// Created by mauri on 19/09/2019.
//

#ifndef UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MAURICIO_RODRIGUEZ_BIBLIOTECA_H
#define UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MAURICIO_RODRIGUEZ_BIBLIOTECA_H

#include "Volumen.h"
class Biblioteca {
int maxLibros;
int maxRevistas;
public:
    void mostrarBiblioteca();
    bool incluir(Volumen &);

    Biblioteca(int &maxLibros, int &maxRevistas);
};


#endif //UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MAURICIO_RODRIGUEZ_BIBLIOTECA_H
