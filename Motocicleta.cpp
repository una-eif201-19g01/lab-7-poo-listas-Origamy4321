//
// Created by Lady Asura III on 20/9/2019.
//

#include "Motocicleta.h"

Motocicleta::Motocicleta() {}

Motocicleta::Motocicleta(const string &marca, const string &modelo, int anno, int placa, float costo, float horas, string tipo)
        : Vehiculo(marca, modelo, anno, placa, costo, horas, tipo) {}
