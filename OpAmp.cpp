//
// Created by OMX-103453 on 17/11/2021.
//
#include "OpAmp.h"
OpAmp::OpAmp() {
    numeroFuentes=0;
    terminalInversora=' ';
    terminalNoInversora=' ';
    resistenciaFinal=0;
    resistenciaEntrada=0;
}
OpAmp::OpAmp(int numberSupplies, char invertingTerminal, char nonInvertingTerminal, float finalResistor, float entryResistor) {
    numeroFuentes=numberSupplies;
    terminalInversora=invertingTerminal;
    terminalNoInversora=nonInvertingTerminal;
    resistenciaFinal=finalResistor;
    resistenciaEntrada=entryResistor;
}
OpAmp::~OpAmp() {

}
int OpAmp::getNumberSupplies() const {
    return numeroFuentes;
}
char OpAmp::getInvertingTerminal() const {
    return terminalInversora;
}
char OpAmp::getNonInvertingTerminal() const {
    return terminalNoInversora;
}
float OpAmp::getFinalResistor() const {
    return resistenciaFinal;
}
float OpAmp::getEntryResistor() const {
    return resistenciaEntrada;
}
void OpAmp::setNumberSupplies(int numberSupplies) {
    numeroFuentes=numberSupplies;
}
void OpAmp::setInvertingTerminal(char invertingTerminal) {
    terminalInversora=invertingTerminal;
}
void OpAmp::setNonInvertingTerminal(char nonInvertingTerminal) {
    terminalNoInversora=nonInvertingTerminal;
}
void OpAmp::setFinalResistor(float finalResistor) {
    resistenciaFinal=finalResistor;
}
void OpAmp::setEntryResistor(float entryResistor) {
    resistenciaEntrada=entryResistor;
}