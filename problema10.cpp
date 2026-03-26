#include "problema10.h"
#include <iostream>
#include <cstring> // lo necesitamos para usar strlen que nos da la longitud de la cadena.
using namespace std;


int valorRomano(char c) {// int porque retorna el valor numérico del carácter romano
        //y char porque solo recibe un caracter
        switch (c) {
        case 'M': return 1000;
        case 'D': return 500;
        case 'C': return 100;
        case 'L': return 50;
        case 'X': return 10;
        case 'V': return 5;
        case 'I': return 1;
        default:  return 0; //si llega otro caracter no se lee parea no romper el programa
        }
    }

int romanoArabigo(char *romano) { //recibe apuntador a la cadena con el número romano
        int resultado = 0;  //acumula los valores romanos
        int len = strlen(romano); //aqui len guarda la longitud

        for (int i = 0; i < len; i++) {
            int actual = valorRomano(romano[i]); //va a la dirección base y le suma i posiciones para traer el caracter actual

            int siguiente;
            if (i + 1 < len) {
                siguiente = valorRomano(romano[i + 1]);
            } else {
                siguiente = 0;
            } //pregunta si aun hay otro valor, si no coloca 0, EVITA LEER MEMORRIA INEXISTENTE


            if (actual < siguiente) {
                resultado -= actual;
            } else {
                resultado += actual;
            }
        }

        return resultado;

    }

void problema10() {
        char romano[50];

        cout << "Ingrese un numero romano: ";
        cin >> romano;

        for (int i = 0; romano[i] != '\0'; i++) {
            if (romano[i] >= 'a' && romano[i] <= 'z') {
                romano[i] = romano[i] - 32;
            }
        }

        cout << "el numero ingresado fue:" << romano << endl;
        cout << "wque corresponde a:" << romanoArabigo(romano) << endl;
    }


//Estructuras usadas: Arreglo char romano[50] y apuntador char *romano


