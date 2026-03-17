#include <iostream>
#include "problema2.h"
#include "problema4.h"
#include "problema6.h"
#include "problema8.h"
using namespace std;

int main() {
    int opcion;

    do {
        cout << "\n======================================" << endl;
        cout << "   PRACTICA 2 - PROBLEMAS PARES      " << endl;
        cout << "======================================" << endl;
        cout << " 1. Problema 2  - Letras aleatorias  " << endl;
        cout << " 2. Problema 4  - Cadena a entero    " << endl;
        cout << " 3. Problema 6  - Minusculas a mayus " << endl;
        cout << " 4. Problema 8  - Separar nums/texto " << endl;
        cout << " 0. Salir                            " << endl;
        cout << "======================================" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        cout << endl;

        switch (opcion) {
        case 1: problema2();  break;
        case 2: problema4(); break;
        case 3: problema6(); break;
        case 4: problema8(); break;
        case 0: cout << "Hasta luego!" << endl; break;
        default: cout << "Opcion invalida." << endl;
        }

    } while (opcion != 0);

    return 0;
}
