//
// Created by mauri on 19/09/2019.
//

#ifndef UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MAURICIO_RODRIGUEZ_REVISTA_H
#define UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MAURICIO_RODRIGUEZ_REVISTA_H

#include "Volumen.h"
class Revista:public Volumen{
private:
    int numRevistas;
public:
    void mostrar() override;

    Revista(string &string, int &i, int &numRevistas);
};


#endif //UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MAURICIO_RODRIGUEZ_REVISTA_H
