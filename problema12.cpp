#include "problema12.h"
#include <iostream>
using namespace std;


bool esCuadradoMagico(int *matriz, int n) {
    int suma = 0; //guarda la sum de la primera fila con la que vamos a comparar el resto
    int sumaDiag1 = 0; //suma diag izquierda
    int sumaDiag2 = 0; //suma diag izquierda

    for (int i = 0; i < n; i++) {
        suma += *(matriz + 0 * n + i);  //recorre la primera fila completa para obtener la suma de referencia
        sumaDiag1 += *(matriz + i * n + i); //recorre la diagonal principal, la posición siempre es fila=i columna=i
        sumaDiag2 += *(matriz + i * n + (n - 1 - i));  //recorre la diagonal secundaria, la columna va decrementando
    }  //lo que se hace aqui es decirle al programa que vaya cambiando de direcciones y extraiga el valor


    //aqui i recorre las filas y j las columnas

    for (int i = 0; i < n; i++) {
        int sumaFila = 0; //guarla la suma de cada fila
        int sumaColumna = 0;  //guarda la sum de cada columna
        for (int j = 0; j < n; j++) {
            sumaFila += *(matriz + i * n + j); //se hacen las sumas
            sumaColumna += *(matriz + j * n + i);
        }
        if (sumaFila != suma || sumaColumna != suma) { //se comparan los valores
            return false;
        }
    }

    //se verifcan diagonales
    if (sumaDiag1 != suma || sumaDiag2 != suma) {
        return false;
    }
    return true;
}


void problema12() {
    int matriz[3][3];
    int n = 3;

    cout << "Ingrese los 9 elementos de la matriz 3x3:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "elemento " << i * n + j + 1 << ": ";
            cin >> matriz[i][j];
        }
    }

    cout << "\n matriz ingresada:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    if (esCuadradoMagico(&matriz[0][0], n)) {
        cout << "\n es un cuadrado magico" << endl;
    } else {
        cout << "\nno es un cuadrado magico" << endl;
    }
}
