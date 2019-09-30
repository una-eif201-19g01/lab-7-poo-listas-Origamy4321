//
// Created by Lady Asura III on 20/9/2019.
//

#ifndef LAB_7_POO_LISTAS_ORIGAMY4321_MOTOCICLETA_H
#define LAB_7_POO_LISTAS_ORIGAMY4321_MOTOCICLETA_H

#include "Vehiculo.h"

using namespace std;

class Motocicleta: public Vehiculo {
private:

public:
    Motocicleta();

    Motocicleta(const string &marca, const string &modelo, int anno, int placa, float costo, float tiempoArrendado);


};


#endif //LAB_7_POO_LISTAS_ORIGAMY4321_MOTOCICLETA_H
