#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <vector>
#include <math.h>

using namespace std;

void header();
void dataInPut();
void solucion();
void clearAll();

int m, n;
int i, j, k;
char continuar;
bool okInPut [10][10];
float constante [10][10];
float temp;


int main() {

    start:
    cout << "El numero de ecuaciones que se busca resolver: ";
    cin >> m;
    n=m+1;

    dataInPut();
    cout<<endl;
    solucion();
    cout<<endl;
    cout << "Escriba 'y' para reiniciar el programa. Si quiere finalizar ecriba cualquier otra tecla. " <<endl;
    cin >> continuar;
    if (continuar == 'y') { clearAll() ; goto start;}
    else return 0;
}

void dataInPut () {
    step1:

    cout << "Ingrese el numero de ecuaciones de su sistema: " << m <<endl;
    cout<<endl;
    cout << "Ingresa cada una de las entradas: " <<endl;
    cout<< endl;
    cout<< endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "\t";
            if ( j== n-1 ) cout << " |";
            if (okInPut [i][j]) {
                if (j == n - 1) cout << constante[i][j] << endl << endl;
                else cout << constante [i][j];
            }
            else {
                cin >> constante [i][j];
                okInPut [i][j] = true;
                goto step1;
            }
        }
    }
}


void solucion() {
    stepOne:
    for (int k = 0; k < m; ++k) {
        if ( constante [k][k] !=1) {
            if (constante [k][k] == 0) {
                for (int j = 0; j < n; ++j) {
                    temp = constante [k][j];
                    constante [k][j] = constante [k+1][j];
                    constante [k+1][j] = temp;
                }
                cout << "Intercambiar fila " << k+1 << "con la fila " <<k+2 << endl;
                goto stepTwo;
            }
            temp= constante [k][k];
            for ( j = 0; j < n; ++j) constante [k][j] /= temp;
            cout << "Fila " << k+1 << " / (" << temp <<")" << endl;

            goto stepTwo;
        }
        for ( i=0; i<m; ++i) {
            if ( 1 != k) {
                if ( constante [i][k] != 0) {
                    temp = constante [i][k];
                    for ( j=0; j<n; ++j) constante [i][j] -= temp*constante [k][j];
                    cout << "Fila " << i+1 <<" - (" << temp<<") Fila " << k+1 <<endl;

                    if ( i == m-1 ) goto stepTwo;
                }
            }
        }

    }
    stepTwo:
    cout << endl;
    for ( i=0; i<m; ++i) {
        for (int j = 0; j < n; ++j) {
            if ( constante [i][j] == -0) constante [i][j] = 0;
            cout << "\t";
            if ( j == n-1 ) cout << " | ";
            cout << constante [i][j];
        }
        cout << endl;
    }

    cout << endl;
    if ( constante [m-1][n-1] !=1 || constante [m-2][n-2] !=0) goto stepOne;
}

void clearAll() {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            okInPut[i][j] = false;
        }
    }
    system("cls");
}

