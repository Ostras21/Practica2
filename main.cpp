#include <iostream>
#include "problema2.h"
#include "problema4.h"
#include "problema6.h"
#include "problema8.h"
#include "problema10.h"
#include "problema12.h"
#include "problema14.h"
#include "problema16.h"
using namespace std;

int main() {
    int opcion;

    do {

        cout << "PRACTICA 2 PROBLEMAS PARES" << endl;
        cout << "---------------------------------------" << endl;
        cout << " 1. problema 2 > letras aleatorias  " << endl;
        cout << " 2. problema 4  > Cadena a entero    " << endl;
        cout << " 3. problema 6  > Minusculas a mayus " << endl;
        cout << " 4. problema 8  > separar numeros de texto " << endl;
        cout << " 5. problema 10 > Romano a normal   " << endl;
        cout << " 6. problema 12 > Cuadro magico   " << endl;
        cout << " 7. problema 14 > Matriz rotada  " << endl;
        cout << " 8. problema 16 > Caminos posibles " << endl;
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
        case 6: problema12(); break;
        case 7: problema14(); break;
        case 8: problema16(); break;
        case 0: cout << "chau" << endl; break;
        default: cout << "dato ivalido" << endl;
        }

    } while (opcion != 0);

    return 0;
}
