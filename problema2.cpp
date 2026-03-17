#include "problema2.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void problema2() {
    const int TAM = 200;      //(consultar de srand y time a la profe)
    char letras[TAM];
    int frecuencia[26] = {0}; //el abcdario tiene 26 letras

    srand(time(0)); //semilla aleatoria basada en la hora actual para que las letras sean distintas cada ejecucion

    for (int i = 0; i < TAM; i++) {
        letras[i] = rand() % 26 + 'A';  //genera un num entre 0 y 25 (+A es para convertir en letra mauyscula)
        frecuencia[letras[i] - 'A']++; // toma la letra guardada y le resta A para obtener indice
    }

    cout << "Arreglo generado:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << letras[i];
    }
    cout << endl;

    cout << "Frecuencia de cada letra:" << endl;
    for (int i = 0; i < 26; i++) {
        cout << (char)('A' + i) << ": " << frecuencia[i] << endl;
    }

}




//este problema hace uso de
