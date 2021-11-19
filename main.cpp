#include <iostream>
#include "string"
#include <vector>
#include "ElementosElectronica.h"
#include "Resistencias.h"
#include "OpAmp.h"
using namespace std;
//Variables Universales
int Opcion1=0;
char continuaroNo='S';
void fillVector(vector<Fuentes>&); //Llenar vector con objeto 'Fuentes'
void fillVectorResistenciasSerie(vector<Resistencias>&);
void fillVectorResistenciasParalelo(vector<Resistencias>&);
void fillVectorColorResistencias(vector<Resistencias>&);
void fillVectorOpcionCC(vector<OpAmp>&);
int main() {
    while (continuaroNo == 'S') {
        cout
                << "Qué desea manejar: Fuentes de Voltaje [1]| Resistencias [2]| Leyes de Kirchhoff [3]| OpAmp [4]"
                << endl;
        cin >> Opcion1;
        if (Opcion1 == 1) {
            int OpcionVoltaje;
            cout << "¿Desea sumar voltajes en serie o en paralelo? Serie[1]|Paralelo[2]" << endl;
            cout << "¿Desea calcular un voltaje a partir de resistencias y corrientes? [3]" << endl;
            cin >> OpcionVoltaje;
            if (OpcionVoltaje == 1) { //Suma voltajes en serie
                int numeroFuentesSerie;
                cout << "Ha elegido la suma de voltaje en serie ¿Cuántas fuentes desea sumar?" << endl;
                cin >> numeroFuentesSerie;
                vector<float> sumaVoltajesSerie;
                float valorFuentesSerie;
                float valorTotalFuentesSerie;
                for (int i = 0; i < numeroFuentesSerie; ++i) {
                    char entraSalePositivo;
                    cout << "Ingresa el valor de la fuente " << i + 1 << " en Volts" << endl;
                    cin >> valorFuentesSerie;
                    cout << "La corriente entra[E] o sale[S] por el positivo" << endl;
                    cin >> entraSalePositivo;
                    if (entraSalePositivo == 'E') {
                        valorFuentesSerie = valorFuentesSerie * (-1);
                    }
                    if (entraSalePositivo == 'S') {
                        valorFuentesSerie = valorFuentesSerie;
                    }
                    sumaVoltajesSerie.push_back(valorFuentesSerie);
                    valorTotalFuentesSerie += sumaVoltajesSerie[i];
                }
                cout << "El valor total del voltaje es igual a: " << valorTotalFuentesSerie << endl;
            }if (OpcionVoltaje == 2) { //Suma de voltajes en paralelo
                cout << "Recuerda que no debes conectar fuentes con distinto voltaje en paralelo" << endl;
                cout << "El voltaje en paralelo no cambia en fuentes de igual voltaje, lo que cambia es la corriente"
                     << endl;
                vector<Fuentes> sumaVoltajeParalelo;
                fillVector(sumaVoltajeParalelo);

            }
        }
            if (Opcion1 == 2) {
                int opcionResistencias;
                cout<<"Desea obtener la suma de series en serie[1]| paralelo[2]| "<<endl;
                cout<<"Obtener resistencia a partir de 4 bandas de colores[3]"<<endl;
                cin>>opcionResistencias;
                if (opcionResistencias==1){
                    vector<Resistencias>vectorResistenciasSerie;
                    fillVectorResistenciasSerie(vectorResistenciasSerie);
                }
                if (opcionResistencias==2){
                    vector<Resistencias>vectorResistenciasParalelo;
                    fillVectorResistenciasParalelo(vectorResistenciasParalelo);
                }
                if (opcionResistencias==3){
                    vector<Resistencias>vectorColorResistencias;
                    fillVectorColorResistencias(vectorColorResistencias);
                }
        }
        if (Opcion1 == 3) {


        }
        if (Opcion1 == 4) {
            char opcionOpAmp;
            cout << "-¿Desea conocer una configuración dando las terminales? [C]" << endl;
            cout << "-¿Desea conocer la posición de las terminales dando la configuración? [P]" << endl;
            cout << "-¿Desea conocer el voltaje resultante con alguna configuración? [V]" << endl;
            cin>>opcionOpAmp;
            if (opcionOpAmp=='C'){
                vector<OpAmp>vectorOpcionCC;
            }
            if (opcionOpAmp=='P'){

            }
            if (opcionOpAmp=='V'){

            }
        }
        if (Opcion1 > 4) {
            cout << "Ha seleccionado una opción invalida, selecciones una que lo sea" << endl;
        }
        cout << "¿Desea seguir utilizando el programa? Sí[S]| No[N]" << endl;
        cin >> continuaroNo;
    }
    return 0;
}
void fillVector(vector<Fuentes>& newsumaVoltajeParalelo) {
    int numeroFuentesParalelo;
    float voltageSupply;
    float currentSupply;
    float voltajeFuenteParaleloTotal;
    float amperajeFuenteParaleloTotal;
    cout<<"Introduce el número de fuentes a utilizar"<<endl;
    cin >> numeroFuentesParalelo;
    for (int i = 0; i < numeroFuentesParalelo; ++i) {
        cout << "Introduce el voltaje de la fuente " << i + 1 << endl;
        cin >> voltageSupply;
        cout << "Introduce el amperaje de la fuente " << i + 1 << endl;
        cin >> currentSupply;
        Fuentes newFuentes(voltageSupply, currentSupply);
        newsumaVoltajeParalelo.push_back(newFuentes);
        voltajeFuenteParaleloTotal=newsumaVoltajeParalelo[0].getvoltageSupply();
        amperajeFuenteParaleloTotal+=newsumaVoltajeParalelo[i].getvoltageSupply();
    }
    cout<<"El voltaje total es: "<<voltajeFuenteParaleloTotal<<endl;
    cout<<"El amperaje total de las fuentes es: "<<amperajeFuenteParaleloTotal<<endl;
}
void fillVectorResistenciasSerie(vector<Resistencias>& newvectorResistenciasSerie){
    int numeroResistenciasSerie;
    float resistanceValue;
    char bondColor='R';
    float resistenciaTotalSerie;
    cout<<"Ingresa el número de resistencias que vas a sumar"<<endl;
    cin>>numeroResistenciasSerie;
    for (int i = 0; i <numeroResistenciasSerie ; ++i) {
        cout<<"Ingresa el valor de la resistencia "<<i+1<<endl;
        cin>>resistanceValue;
        Resistencias newResistencias(resistanceValue, bondColor);
        newvectorResistenciasSerie.push_back(newResistencias);
        resistenciaTotalSerie+=newvectorResistenciasSerie[i].getResistanceValue();
    }
    cout<<"La resistencia total es: "<<resistenciaTotalSerie<<" Ohms"<<endl;
}
void fillVectorResistenciasParalelo(vector<Resistencias>& newvectorResistenciasParalelo){
    int numeroResistenciasParalelo;
    float resistanceValue;
    float totalDenominador=1;
    float totalNumerador=0;
    float resistenciaTotalParalelo;
    char bondColor='R';
    cout << "Ingresa el número de resistencias a sumar" << endl;
    cin >> numeroResistenciasParalelo;
    for (int i = 0; i < numeroResistenciasParalelo; i++) {
        cout << "Ingresa el valor de la resistencia " << i + 1 <<" en Ohms"<<endl;
        cin >> resistanceValue;
        Resistencias newResistencias(resistanceValue, bondColor);
        newvectorResistenciasParalelo.push_back(newResistencias);
        totalDenominador *= newvectorResistenciasParalelo[i].getResistanceValue();

    }
    for (int i = 0; i <numeroResistenciasParalelo ; ++i) {
        totalNumerador+=(totalDenominador/newvectorResistenciasParalelo[i].getResistanceValue());
    }
    resistenciaTotalParalelo=(1/(totalNumerador/totalDenominador));
    cout<<"La resistencia equivalente es igual "<<resistenciaTotalParalelo<<" Ohms"<<endl;
}
void fillVectorColorResistencias(vector<Resistencias>& newvectorColorResistencias){
    int numeroBandas=4;
    float resistanceValue=0;
    char bondColor;
    int numberForBand1;
    int numberForBand2;
    int numberForBand3;
    string band4Tolerancia;
    char letterForBand1;
    char letterForBand2;
    char letterForBand3;
    char letterForBand4;
    cout<<"Ingresa los colores de las bandas"<<endl;
    cout<<"Opciones para las 2 primeras bandas"<<endl;
    cout<<"Negro[N]| Café[C]| Rojo[R]| Naranja[J]| Amarillo[A]"<<endl;
    cout<<"Verde[V]| Azul[Z]| Violeta[X]| Gris[G]| Blanco[B]"<<endl;
    cout<<"Opciones para la 3ra banda"<<endl;
    cout<<"Plata[P]| Oro[O]| Negro[N]| Café[C]| Rojo[R]"<<endl;
    cout<<"Naranja[J]| Amarillo[A]| Verde[V]| Azul[Z]| Violeta[X]"<<endl;
    cout<<"Opciones para la 4ta banda"<<endl;
    cout<<"Plata[P]| Oro[O]| Café[C]| Rojo[R]"<<endl;
    cout<<"Verde[V]| Azul[Z]| Violeta[X]"<<endl;
    for (int i = 0; i <numeroBandas ; ++i) {
        cout<<"Ingresa el color de la banda "<<i+1<<endl;
        cin>>bondColor;
        Resistencias newResistencias(resistanceValue, bondColor);
        newvectorColorResistencias.push_back(newResistencias);
        letterForBand1=newvectorColorResistencias[0].getBandColor();
        letterForBand2=newvectorColorResistencias[1].getBandColor();
        letterForBand3=newvectorColorResistencias[2].getBandColor();
        letterForBand4=newvectorColorResistencias[3].getBandColor();
        //Banda 1
        if (letterForBand1=='N'){
            numberForBand1=0;
        }if (letterForBand1=='C'){
            numberForBand1=1;
        }if (letterForBand1=='R'){
            numberForBand1=2;
        }if (letterForBand1=='J'){
            numberForBand1=3;
        }if (letterForBand1=='A'){
            numberForBand1=4;
        }if (letterForBand1=='V'){
            numberForBand1=5;
        }if (letterForBand1=='Z'){
            numberForBand1=6;
        }if (letterForBand1=='X'){
            numberForBand1=7;
        }if (letterForBand1=='G'){
            numberForBand1=8;
        }if (letterForBand1=='B'){
            numberForBand1=9;
        }//Banda 2
        if (letterForBand2=='N'){
            numberForBand2=0;
        }if (letterForBand2=='C'){
            numberForBand2=1;
        }if (letterForBand2=='R'){
            numberForBand2=2;
        }if (letterForBand2=='J'){
            numberForBand2=3;
        }if (letterForBand2=='A'){
            numberForBand2=4;
        }if (letterForBand2=='V'){
            numberForBand2=5;
        }if (letterForBand2=='Z'){
            numberForBand2=6;
        }if (letterForBand2=='X'){
            numberForBand2=7;
        }if (letterForBand2=='G'){
            numberForBand2=8;
        }if (letterForBand2=='B'){
            numberForBand2=9;
        }//Banda 3
        if (letterForBand3=='P'){
            numberForBand3=0.01;
        }if (letterForBand3=='O'){
            numberForBand3=0.1;
        }if (letterForBand3=='N'){
            numberForBand3=1;
        }if (letterForBand3=='C'){
            numberForBand3=10;
        }if (letterForBand3=='R'){
            numberForBand3=100;
        }if (letterForBand3=='J'){
            numberForBand3=1000;
        }if (letterForBand3=='Z'){
            numberForBand3=10000;
        }if (letterForBand3=='X'){
            numberForBand3=100000;
        }if (letterForBand3=='G'){
            numberForBand3=1000000;
        }if (letterForBand3=='B'){
            numberForBand3=10000000;
        }//Band 4
        if (letterForBand4=='P'){
            band4Tolerancia="+-10%";
        }if (letterForBand4=='O'){
            band4Tolerancia="+-5%";
        }if (letterForBand4=='C'){
            band4Tolerancia="+-1%";
        }if (letterForBand4=='R'){
            band4Tolerancia="+-2%";
        }if (letterForBand4=='V'){
            band4Tolerancia="+-0.5%";
        }if (letterForBand4=='Z'){
            band4Tolerancia="+-0.25%";
        }if (letterForBand4=='X'){
            band4Tolerancia="+-0.1%";
        }
    }
    cout<<letterForBand1<<endl;
    cout<<letterForBand2<<endl;
    cout<<letterForBand3<<endl;
    cout<<letterForBand4<<endl;
    cout<<"La resistencia total es "<<((numberForBand1*10)+numberForBand2)*numberForBand3<<" Ohms "<<endl;
    cout<<"con "<<band4Tolerancia<<" tolerancia"<<endl;
}
void fillVectorOpcionCC(vector<OpAmp>& newvectorOpcionCC){
    int numberSupplies;
    char invertingTerminal;
    char nonInvertingTerminal='A';
    float finalResistor=0;
    float entryResistor=0;
    char tierraOFuente;
    cout<<"Ingresa la cantidad de fuentes"<<endl;
    cin>>numberSupplies;
    if (numberSupplies==1){
        for (int i = 0; i <1 ; ++i) {
            cout<<"Ingrese tierra[T]| fuente[F] que entra por la terminal inversora"<<endl;
            cin>>invertingTerminal;
            OpAmp newOpAmp(numberSupplies, invertingTerminal,nonInvertingTerminal,finalResistor,entryResistor);
            newvectorOpcionCC.push_back(newOpAmp);
            tierraOFuente=newvectorOpcionCC[0].getInvertingTerminal();
            if (tierraOFuente=='F'){
                cout<<"La configuración es 'inversora'"<<endl;
            }
            if (tierraOFuente=='T'){
                cout<<"La configuración es 'no inversora'"<<endl;
            }
        }
    }
    if (numberSupplies==2){
    cout<<"La configuración es 'amplificador de diferencia'"<<endl;
    }
    if (numberSupplies==3){
        cout<<"La configuración es 'amplificador sumador'"<<endl;
    }
}