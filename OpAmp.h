//
// Created by OMX-103453 on 17/11/2021.
//

#ifndef MAIN_CPP_OPAMP_H
#define MAIN_CPP_OPAMP_H
#include "iostream"
#include "string"
using namespace std;
class OpAmp {
private:
int numeroFuentes;
char terminalInversora;
char terminalNoInversora;
float resistenciaFinal;
float resistenciaEntrada;
public:
    OpAmp();//Constructor Default
    OpAmp(int , char ,char,float ,float );//Constructor Personalizado
    ~OpAmp(); //Destructor
    //Getters
    int getNumberSupplies() const;
    char getInvertingTerminal() const;
    char getNonInvertingTerminal() const;
    float getFinalResistor() const;
    float getEntryResistor() const;
    //Setters
    void setNumberSupplies(int );
    void setInvertingTerminal(char );
    void setNonInvertingTerminal(char );
    void setFinalResistor(float );
    void setEntryResistor(float );
};


#endif //MAIN_CPP_OPAMP_H
