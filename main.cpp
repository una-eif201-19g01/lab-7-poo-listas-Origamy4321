//
// Created by Lady Asura III on 20/9/2019.
//
#include <iostream>
#include "ListaVehiculos.h"
using namespace std;
int main(){

Automovil automovil1("hyundai","accent",2009,567123,5000,20);
Motocicleta motocicleta1("Yamaha", "1",2005,561231,3000,10);

ListaVehiculos *listaVehiculos = new ListaVehiculos();
listaVehiculos->insertarInicio(motocicleta1, automovil1);
cout<< listaVehiculos->toString();



}
