//
// Created by OMX-103453 on 16/11/2021.
//

#include "Resistencias.h"
//Inicia parte de Resistencias
Resistencias::Resistencias() {
    valorResistencia=0;
    colorBanda=' ';
}Resistencias::Resistencias(float resistanceValue, char bandColor) {
    valorResistencia=resistanceValue;
    colorBanda=bandColor;
}
Resistencias::~Resistencias() {

}

float Resistencias::getResistanceValue() const {
    return valorResistencia;
}
char Resistencias::getBandColor() const {
    return colorBanda;
}

void Resistencias::setResistanceValue(float resistanceValue) {
    valorResistencia=resistanceValue;
}
void Resistencias::setBandColor(char bandColor) {
    colorBanda=bandColor;
}