//
// Created by Lady Asura III on 25/9/2019.
//

#ifndef LAB_7_POO_LISTAS_ORIGAMY4321_LISTAVEHICULOS_H
#define LAB_7_POO_LISTAS_ORIGAMY4321_LISTAVEHICULOS_H

#include "Nodo.h"

class ListaVehiculos {

    Nodo *primero;
    Nodo *actual;

public:

    ListaVehiculos();

    ListaVehiculos(Nodo *primero, Nodo *actual);

    virtual ~ListaVehiculos();

    void insertarInicio(Motocicleta &motocicleta,Automovil &automovil );

    bool eliminarInicio(Motocicleta &motocicleta,Automovil &automovil);

    void insertarInicio(Automovil &automovil);

    bool eliminarInicio(Automovil &automovil);

    int totalNodos();

    Nodo *getPrimero() const;

    void setPrimero(Nodo *primero);

    Nodo *getActual() const;

    void setActual(Nodo *actual);

    string toString();


};


#endif //LAB_7_POO_LISTAS_ORIGAMY4321_LISTAVEHICULOS_H
