#include "problema8.h"
#include <iostream>
using namespace std;

void separarNumerosTexto(char *original, char *texto, char *numeros) {

    int ti = 0; //indice para texto
    int ni = 0; //indice para num

    for (int i = 0; original[i] != '\0'; i++) {
        if (original[i] >= '0' && original[i] <= '9') {
            numeros[ni++] = original[i];
        } else {
            texto[ti++] = original[i];
        }
    }

    //esto indica donde termina
    texto[ti] = '\0';
    numeros[ni] = '\0';
}


//se reserva memoria para cada una de las variables
void problema8() {
    char original[200];
    char texto[200];
    char numeros[200];

    cout << "Ingrese una cadena: ";
    cin >> original;

    separarNumerosTexto(original, texto, numeros); //se llama a la funcion

    cout << "Original: " << original << endl;
    cout << "Texto: " << texto << ". Numero: " << numeros << endl;
}
