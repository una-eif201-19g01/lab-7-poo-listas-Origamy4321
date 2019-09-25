//
// Created by Lady Asura III on 20/9/2019.
//

#ifndef LAB_7_POO_LISTAS_ORIGAMY4321_AUTOMOVIL_H
#define LAB_7_POO_LISTAS_ORIGAMY4321_AUTOMOVIL_H

#include "Vehiculo.h"
using namespace std;

class Automovil: public Vehiculo {

private:

public:
    Automovil();

    Automovil(const string &marca, const string &modelo, int anno, int placa, float costo, float horas, string tipo);

};


#endif //LAB_7_POO_LISTAS_ORIGAMY4321_AUTOMOVIL_H
