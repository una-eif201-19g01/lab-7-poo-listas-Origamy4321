//
// Created by Lady Asura III on 20/9/2019.
//

#include "Vehiculo.h"

Vehiculo::Vehiculo() {}

Vehiculo::Vehiculo(const string &marca, const string &modelo, int anno, int placa, float costo, float horas, string tipo) : marca(
        marca), modelo(modelo), anno(anno), placa(placa), costo(costo), horas(horas), tipo(tipo) {}

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
    reporte = "Los datos del vehiculo son los siguientes: " "\n" "Marca del vehiculo" + getMarca() + "\n" +
              "Modelo del vehiculo:" + getModelo() + "El número de placa del vehiculo es el siguiente: " +
              to_string(getPlaca()) + "\n" + "El año del vehiculo es: " + to_string(getAnno()) + "\t" +
              "el costo del arrendamiento es de: "+ to_string(precioVehiculo()) + "\n";

    return reporte;
}

float Vehiculo::precioVehiculo() {

    float dia;
    float costo = 0;
    if (tipo == "Motocicleta") {

        costo = costo * horas;
        return costo;
    } else {
        if (horas <= 24) {

            costo = costo * 24;

            return costo;
        } else
            for (int i = 0; i <= horas; i++) {
                if (i % 12 == 0)
                    dia++;
            }

        costo = costo * dia;

        return costo;
    }
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

void Vehiculo::eliminarCosto(int placa) {
    if (placa == getPlaca());
    setCosto(0.0);
}

void Vehiculo::eliminarHoras(int placa) {
    if (placa == getPlaca());
    setHoras(0);

}

float Vehiculo::getCosto() const {
    return costo;
}

void Vehiculo::setCosto(float costo) {
    Vehiculo::costo = costo;
}

float Vehiculo::getHoras() const {
    return horas;
}

void Vehiculo::setHoras(float horas) {
    Vehiculo::horas = horas;
}
