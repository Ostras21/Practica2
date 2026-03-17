#include "problema4.h"
#include <iostream>
using namespace std;

int cadenaAEntero(char *cadena) {  //el cahr es un apuntador que recibe la cadena del usuario

    int resultado = 0; //se va acumulando el numero encontrado mientras se re3corre la cadna
    int i = 0;   //indice para recorreer la cadena

    for (; cadena[i] != '\0'; i++) {
        resultado = resultado * 10 + (cadena[i] - '0');
    }

    return resultado;
}

void problema4() {
    char cadena[100]; //se asigna espacio para 100 caracteres

    cout << "Ingrese una cadena numerica: ";
    cin >> cadena;

    cout << "El numero entero es: " << cadenaAEntero(cadena) << endl;
}
