//
// Created by Lady Asura III on 25/9/2019.
//

#include "ListaVehiculos.h"

ListaVehiculos::ListaVehiculos() {}

ListaVehiculos::ListaVehiculos(Nodo *primero, Nodo *actual) : primero(nullptr), actual(nullptr) {

}

ListaVehiculos::~ListaVehiculos() {

    while (primero != nullptr)
        actual = primero;
    primero = primero->getSiguiente();
    delete(actual);

}

Nodo *ListaVehiculos::getPrimero() const {
    return primero;
}

void ListaVehiculos::setPrimero(Nodo *primero) {
    ListaVehiculos::primero = primero;
}

Nodo *ListaVehiculos::getActual() const {
    return actual;
}

void ListaVehiculos::setActual(Nodo *actual) {
    ListaVehiculos::actual = actual;
}

void ListaVehiculos::insertarInicio(Motocicleta &motocicleta, Automovil &automovil) {
    actual = new Nodo (motocicleta,automovil,nullptr);
    if(primero == nullptr){
        primero = actual;
    } else{

        actual->setSiguiente(primero);
        primero = actual;
    }

}

bool ListaVehiculos::eliminarInicio(Motocicleta &motocicleta, Automovil &automovil) {
    if(primero == nullptr){
    return false;}
    else {
        actual = primero;
        primero = primero->getSiguiente();
        delete actual;
        return true;
    }
}

void ListaVehiculos::insertarInicio(Automovil &automovil) {

}

bool ListaVehiculos::eliminarInicio(Automovil &automovil) {
    return false;
}

int ListaVehiculos::totalNodos() {
    return 0;
}

string ListaVehiculos::toString() {

    string reportes;
    actual=primero;
    while(actual != nullptr){

        reportes = reportes + actual->toStringAuto() + actual->toStringMoto();
        actual = actual->getSiguiente();
    }


    return reportes;
}




