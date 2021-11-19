//
// Created by Jesús on 15/11/2021.
//
#include "ElementosElectronica.h"
//Empieza parte de Fuentes
Fuentes::Fuentes() {
    voltageFuente=0;
    amperajeFuente=0;
}
Fuentes::Fuentes(float voltageSupply, float currentSupply) {
    voltageFuente=voltageSupply;
    amperajeFuente=currentSupply;
}
Fuentes::~Fuentes() {

}
//Getters
float Fuentes::getvoltageSupply() const {
    return voltageFuente;
}
float Fuentes::getcurrentSupply() const {
    return amperajeFuente;
}
//Setters
void Fuentes::setvoltageSupply(float voltageSupply) {
    voltageFuente=voltageSupply;
}
void Fuentes::setcurrentSupply(float currentSupply) {
    amperajeFuente=currentSupply;
}
//Termina parte de Fuentes
