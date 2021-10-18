/*
 * PROGRAMA ELECTRÓNICA
 * Autores: García Piña José de Jesús, Ortega Penagos Oscar, Caballero Lopez Alonso
 * 20/10/2021
 */
#include <iostream>
using namespace std;
int main() {
    cout << "Este programa te ayuda a obtener valores de resistencias, voltajes y corrientes" <<endl;
    cout<<"¿Deseas hacer un análisis de circuito o deseas sacar una resistencia equivalente?"<<endl;
    cout<<"Si deseas hacer un análisis de circuito escribe 1 y si deseas obtener una resistencia equivalente escribe 2"<<endl;
   int Opccion;
    cin>>Opccion;
    if (Opccion=2){
        int nr;
        int r;
        cout<<"¿Cuantas resistencias tienes"<<endl;
        cin>>nr;
        for (int i = 1; i < nr+1; ++i) {
            cout<<"Ingresa el valor de tu resistencia " <<i<<endl; //Aquí mejor hay que poner un arreglo para
            // que nos guarde los valores de las resistencias


        }


    }

    return 0;
}
