//
// Created by Lady Asura III on 25/9/2019.
//

#include "Nodo.h"

Nodo::Nodo(const Motocicleta &motos, const Automovil &autos, Nodo *siguiente) : motos(motos), autos(autos),
                                                                                siguiente(siguiente) {}

Nodo::Nodo() {}

const Motocicleta &Nodo::getMotos() const {
    return motos;
}

void Nodo::setMotos(const Motocicleta &motos) {
    Nodo::motos = motos;
}

const Automovil &Nodo::getAutos() const {
    return autos;
}

void Nodo::setAutos(const Automovil &autos) {
    Nodo::autos = autos;
}

Nodo *Nodo::getSiguiente() const {
    return siguiente;
}

void Nodo::setSiguiente(Nodo *siguiente) {
    Nodo::siguiente = siguiente;
}

string Nodo::toStringAuto() {
    return autos.toString();
}

string Nodo::toStringMoto() {
    return motos.toString();
}
