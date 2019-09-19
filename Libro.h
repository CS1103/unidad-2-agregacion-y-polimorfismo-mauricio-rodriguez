//
// Created by mauri on 19/09/2019.
//

#ifndef UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MAURICIO_RODRIGUEZ_LIBRO_H
#define UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MAURICIO_RODRIGUEZ_LIBRO_H


#include "Volumen.h"
class Libro: public Volumen {
private:
    int numLibros;
public:
    void mostrar() override;
    Libro(string &string, int &i, int &numLibros);
};


#endif //UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MAURICIO_RODRIGUEZ_LIBRO_H
