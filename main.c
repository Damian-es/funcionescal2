#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    int opc;
    float x, y, r;
    opc = menu();
    switch (opc)
    {
    case 1:
        printf("Ingrese el num 1: ");
        x=validarNumero();
        printf("Ingrese el num 2: ");
        y=validarNumero();
        r = suma(x, y);
        printf("La suma es: %.2f\n", r);
        break;
    case 2:
        printf("Ingrese el num 1: ");
        x=validarNumero();
        printf("Ingrese el num 2: ");
        y=validarNumero();
        r = resta(x, y);
        printf("La resta es: %.2f\n", r);
        break;
    case 3:
        printf("Ingrese el num 1: ");
        x=validarNumero();
        printf("Ingrese el num 2: ");
        y=validarNumero();
        r = multiplicacion(x, y);
        printf("La multiplicacion es: %.2f\n", r);
        break;
    case 4:
        printf("Ingrese el num 1: ");
        x=validarNumero();
        printf("Ingrese el num 2: ");
        y=validarNumero();
        r = division(x, y);
        printf("La division es: %.2f\n", r);
        break;
    default:
        break;
    }

    return 0;
}

