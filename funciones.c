#include <stdio.h>
#include "funciones.h"
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
