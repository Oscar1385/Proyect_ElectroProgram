//
// Created by OMX-103453 on 16/11/2021.
//
#ifndef MAIN_CPP_RESISTENCIAS_H
#define MAIN_CPP_RESISTENCIAS_H
#include "iostream"
#include "string"
using namespace std;
class Resistencias {
private:
    float valorResistencia;
    char colorBanda;
public:
    Resistencias();//Constructor Default
    Resistencias(float ,char ); //Constructor Personalizado
    ~Resistencias();//Destructor
    //Getters
    float getResistanceValue() const;
    char getBandColor() const;
    //Setters
    void setResistanceValue(float );
    void setBandColor(char );
};


#endif //MAIN_CPP_RESISTENCIAS_H
