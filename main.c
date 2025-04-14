#include <stdio.h>

float validarNumero();
int menu();
float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);

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

float validarNumero(){
    float a;
    int val;
    do
    {
        fflush(stdin);
        val = scanf("%f", &a);
        if (val != 1)
        {
            printf("El valor ingresado es incorrecto, ingreselo nuevamente\n");
        }
    } while (val != 1);
    return a;
}

int menu(){
    int opc;
    printf("Seleccione una opcion:\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf(">> ");
    scanf("%d",&opc);
    return opc;
}

float suma(float a, float b){
    float s;
    s = a + b;
    return s;
}

float resta(float a, float b){
    float s;
    s = a - b;
    return s;
}

float multiplicacion(float a, float b){
    float s;
    s = a * b;
    return s;
}

float division(float a, float b){
    float s = 0;
    
    if (b != 0)
    {
        s = a / b;
    }else{
        printf("No se puede dividir para 0\n");
    }
    return s;
}
