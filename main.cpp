#include <iostream>
#include "problema2.h"
#include "problema4.h"
#include "problema6.h"
#include "problema8.h"
#include "problema10.h"
using namespace std;

int main() {
    int opcion;

    do {

        cout << "PRACTICA 2 PROBLEMAS PARES" << endl;
        cout << "---------------------------------------" << endl;
        cout << " 1. problema 2 > Letras aleatorias  " << endl;
        cout << " 2. problema 4  > Cadena a entero    " << endl;
        cout << " 3. problema 6  > Minusculas a mayus " << endl;
        cout << " 4. problema 8  > Separar nums/texto " << endl;
        cout << " 5. problema 10 > Romano a arabigo   " << endl;
        cout << " 0. salir                            " << endl;
        cout << "--------------------------------------" << endl;
        cout << "opcion: ";
        cin >> opcion;
        cout << endl;

        switch (opcion) {
        case 1: problema2();  break;
        case 2: problema4(); break;
        case 3: problema6(); break;
        case 4: problema8(); break;
        case 5: problema10(); break;
        case 0: cout << "chau" << endl; break;
        default: cout << "dato ivalido" << endl;
        }

    } while (opcion != 0);

    return 0;
}
