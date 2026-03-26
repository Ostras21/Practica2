#include "problema14.h"
#include <iostream>
using namespace std;

void llenarMatriz(int *matriz, int n) { //dir 1r elemento
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            *(matriz + i * n + j) = i * n + j + 1; //convierte las coordenadas en una posición lineal
        }
    }
}

void imprimirMatriz(int *matriz, int n, const char *titulo) { //recibe el puntero de la matriz
    cout << "\n" << titulo << ":" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << *(matriz + i * n + j) << "\t";
        }
        cout << endl;
    }
}

void rotar90(int *origen, int *destino, int n) { //recibe doss punteros
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            *(destino + j * n + (n - 1 - i)) = *(origen + i * n + j);  //indica el origen y el destino de cada elemento
        }
    }
}

void problema14() {
    const int N = 5;

    int original[N][N];
    int rot90[N][N];
    int rot180[N][N];
    int rot270[N][N];

    llenarMatriz(&original[0][0], N);

    rotar90(&original[0][0], &rot90[0][0], N);
    rotar90(&rot90[0][0],    &rot180[0][0], N);
    rotar90(&rot180[0][0],   &rot270[0][0], N);

    imprimirMatriz(&original[0][0], N, "Matriz original");
    imprimirMatriz(&rot90[0][0],    N, "Matriz rotada 90 grados");
    imprimirMatriz(&rot180[0][0],   N, "Matriz rotada 180 grados");
    imprimirMatriz(&rot270[0][0],   N, "Matriz rotada 270 grados");
}
