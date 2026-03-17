#include "problema6.h"
#include <iostream>
using namespace std;

void aMayusculas(char *cadena) {  // recibe la dirección de la cadena, entonces cualquier cambio que hagamos adentro afecta la cadena original
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] >= 'a' && cadena[i] <= 'z') {
            cadena[i] = cadena[i] - 32; //si es minuscula le resta 32 para pasarala a mayus
        }
    }
}


void problema6() {
    char cadena[100];

    cout << "Ingrese una cadena: ";
    cin >> cadena;

    cout << "Original: " << cadena << endl;
    aMayusculas(cadena);
    cout << "En mayuscula: " << cadena << endl;
}


//Arreglo char cadena[100] y apuntador char *cadena
