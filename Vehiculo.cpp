//
// Created by Lady Asura III on 20/9/2019.
//

#include "Vehiculo.h"

Vehiculo::Vehiculo() {}

Vehiculo::Vehiculo(const string &marca, const string &modelo, int anno, int placa, float costo, float tiempoArrendado)
        : marca(marca), modelo(modelo), anno(anno), placa(placa), costo(costo), tiempoArrendado(tiempoArrendado) {}


const string &Vehiculo::getMarca() const {
    return marca;
}

void Vehiculo::setMarca(const string &marca) {
    Vehiculo::marca = marca;
}

const string &Vehiculo::getModelo() const {
    return modelo;
}

void Vehiculo::setModelo(const string &modelo) {
    Vehiculo::modelo = modelo;
}

int Vehiculo::getAnno() const {
    return anno;
}

void Vehiculo::setAnno(int anno) {
    Vehiculo::anno = anno;
}

int Vehiculo::getPlaca() const {
    return placa;
}

void Vehiculo::setPlaca(int placa) {
    Vehiculo::placa = placa;
}

string Vehiculo::toString() {

    string reporte;
    reporte = "Los datos del vehiculo son los siguientes:  " "\n" "Marca del vehiculo:   " + getMarca() + "\n" +
              "Modelo del vehiculo:   " + getModelo() + "El número de placa del vehiculo es el siguiente:  " +
              to_string(getPlaca()) + "\n" + "El año del vehiculo es:   " + to_string(getAnno()) + "\t" +
              "el costo del arrendamiento es de:  " + to_string(calcularCosto())+"\n";

    return reporte;
}


void Vehiculo::eliminarDatosAnno(int placa) {

    if (placa == getPlaca());
    setAnno(0);

}

void Vehiculo::eliminarMarca(int placa) {

    if (placa == getPlaca());
    setMarca("");


}

void Vehiculo::eliminarModelo(int placa) {

    if (placa == getPlaca());
    setModelo("");

}

float Vehiculo::getCosto() const {
    return costo;
}

void Vehiculo::setCosto(float costo) {
    Vehiculo::costo = costo;
}

float Vehiculo::getTiempoArrendado() const {
    return tiempoArrendado;
}

void Vehiculo::setTiempoArrendado(float tiempoArrendado) {
    Vehiculo::tiempoArrendado = tiempoArrendado;
}

float Vehiculo::calcularCosto() {

    float suma = 0;
    suma = costo * tiempoArrendado;

    return suma;
}



