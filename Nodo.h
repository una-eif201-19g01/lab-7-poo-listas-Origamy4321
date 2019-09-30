//
// Created by Lady Asura III on 25/9/2019.
//

#ifndef LAB_7_POO_LISTAS_ORIGAMY4321_NODO_H
#define LAB_7_POO_LISTAS_ORIGAMY4321_NODO_H

#include "Automovil.h"
#include "Motocicleta.h"

class Nodo {

private:

   Motocicleta motos;

   Automovil autos;

    Nodo *siguiente;

public:

    Nodo(const Motocicleta &motos, const Automovil &autos, Nodo *siguiente);

    Nodo();

    const Motocicleta &getMotos() const;

    void setMotos(const Motocicleta &motos);

    const Automovil &getAutos() const;

    void setAutos(const Automovil &autos);

    Nodo *getSiguiente() const;

    void setSiguiente(Nodo *siguiente);

    string toStringAuto();

    string toStringMoto();
};

#endif //LAB_7_POO_LISTAS_ORIGAMY4321_NODO_Heqw
