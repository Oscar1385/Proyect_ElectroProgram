//
// Created by OMX-103453 on 15/11/2021.
//

#ifndef MAIN_CPP_ELEMENTOSELECTRONICA_H
#define MAIN_CPP_ELEMENTOSELECTRONICA_H
#include "iostream"
#include "string"
using namespace std;
//Termina clase Resistencias
//Clase de fuentes de Voltaje
class Fuentes{
private: //Características de la fuente
    float voltageFuente;
    float amperajeFuente;
public:
    Fuentes(); //Constructor default
    Fuentes(float , float ); //Constructor propio
    ~Fuentes();

    //Getters
    float getvoltageSupply() const;
    float getcurrentSupply() const;

    //Setters
    void setvoltageSupply(float );
    void setcurrentSupply(float );
};
class ElementosElectronica {

};


#endif //MAIN_CPP_ELEMENTOSELECTRONICA_H
