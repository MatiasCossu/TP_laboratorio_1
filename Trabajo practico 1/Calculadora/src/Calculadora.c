/*
 ============================================================================
 Name        : Calculadora.c
 Author      : Matias Taiel Cossu

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    int opcion;
    float operadorA;
    float operadorB;
    float suma;
    float resta;
    float division;
    float multiplicacion;
    float factorialA;
    float factorialB;

    operadorA=0;
    operadorB=0;
    printf("BIENVENIDOS A CALCULADORA");
    setbuf(stdout, NULL);
    do
    {
        printf("\nEl operador A vale: %.2f \nEl operador B vale: %.2f \n",operadorA,operadorB);
        printf("1.Ingreso del operador A.\n2.Ingreso del operador B.\n3.Calcular todas las operaciones\n4.Resultados\n5.Salir\n");
        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
                printf("1.Ingrese un numero para el operador A: ");
                scanf("%f",&operadorA);
                break;

            case 2:
                printf("Ingrese un numero para el operador B: ");
                scanf("%f",&operadorB);
                break;

            case 3:
                suma = SumaDeNumeros(operadorA,operadorB);
                resta = RestaDeNumeros(operadorA,operadorB);
                division = DivisionDeNumeros(operadorA,operadorB);
                multiplicacion = MultiplicacionDeNumeros(operadorA,operadorB);
                factorialA = FactorialNumero(operadorA);
                factorialB = FactorialNumero(operadorB);
                break;

            case 4:
                printf("La suma de  operador A y operador B es: %.2f\n", suma);
                printf("La resta de  operador A y operador B es: %.2f\n", resta);
                if(division ==0)
                {
                    printf("No es posible dividir por 0\n");
                }
                else
                {
                    printf("La division de  operador A y operador B es: %.2f\n", division);
                }
                printf("La multiplicacion de  operador A y operador B es: %.2f\n", multiplicacion);
                printf("El factorial del operador A es: %.2f\n",factorialA);
                printf("El factorial del operador B es: %.2f\n",factorialB);
                break;
        }
    }while(opcion !=5);
}
