//
// Created by mauri on 19/09/2019.
//

#ifndef UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MAURICIO_RODRIGUEZ_VOLUMEN_H
#define UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MAURICIO_RODRIGUEZ_VOLUMEN_H

using namespace std;

#include <string>
class Volumen {
private:
    string nombre;
    int numVol;
public:
    Volumen(string &, int &);
    virtual void mostrar();
    virtual ~Volumen();
};


#endif //UNIDAD_2_AGREGACION_Y_POLIMORFISMO_MAURICIO_RODRIGUEZ_VOLUMEN_H
