#include "problema16.h"
#include <iostream>
using namespace std;

long long caminos(long long *dp, int n) { //recibe el apuntador al primer elemento de la matriz
    // inicializar todo en 0
    for (int i = 0; i <= n; i++) //equivale a dp[i][j]
        for (int j = 0; j <= n; j++)
            *(dp + i * (n+1) + j) = 0;

    // primera fila y primera columna = 1
    for (int i = 0; i <= n; i++) {
        *(dp + i * (n+1) + 0) = 1; // primera columna
        *(dp + 0 * (n+1) + i) = 1; // primera fila
    }

    // cada celda = arriba + izquierda
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            *(dp + i * (n+1) + j) = *(dp + (i-1) * (n+1) + j)
            + *(dp + i * (n+1) + (j-1));
        }
    }

    return *(dp + n * (n+1) + n); // retorna dp[n][n]
}

void problema16() {
    int n;
    cout << "Ingrese el tamano de la malla (n): ";
    cin >> n;

    long long dp[21][21];

    cout << "Para una malla de " << n << "x" << n
         << " puntos hay " << caminos(&dp[0][0], n)
         << " caminos." << endl;
}
