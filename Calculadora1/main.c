#include <stdio.h>
#include <stdlib.h>
#include "../Calculadora1/funciones.h"

float sumar(float x, float y);
float restar(float x, float y);
float multiplicar(float x, float y);
float dividir(float x, float y);
float factorial(float x);
float factorial2(float y);

int main()
{
    int opcion;
    float operando1;
    float operando2;
    char operacion;
    int flag = 0;
    float resultado;
    float resultado2;

    do{
        printf("\nElija el numero correspondiente a la opcion que quiere usar:\n1.Ingresar el 1er operando\n2.Ingresar el 2do operando\n3.Calcular una operacion\n4.Informar resultados\n5.Salir\n\n");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            printf("\nPrimer operando: ");
            scanf("%f", &operando1);
        break;
        case 2:
            printf("\nSegundo operando: ");
            scanf("%f", &operando2);
        break;
        case 3:
            flag = 1;
            printf("\nCalcular:\n a.Suma\n b.Resta\n c.Division\n d.Multiplicacion\n e.Factorial\n\n");
            scanf(" %c", &operacion);
        break;
        case 4:
            if (flag == 1)
                {
                    switch(operacion)
                    {
                    case 'a':
                        resultado = sumar(operando1, operando2);
                        printf("\nLa suma entre %.1f y %.1f es: %.1f \n",operando1,operando2,resultado);
                    break;
                    case 'b':
                        resultado = restar(operando1, operando2);
                        printf("\nLa resta entre %.1f y %.1f es: %.1f \n",operando1,operando2,resultado);
                    break;
                    case 'c':
                        if(operando2 == 0)
                            {
                                printf("\nNo se puede dividir por cero\n");
                            } else
                            {
                                resultado = dividir(operando1, operando2);
                                printf("\nLa division entre %.1f y %.1f es: %.1f \n",operando1,operando2,resultado);
                            }
                    break;
                    case 'd':
                        resultado = multiplicar(operando1, operando2);
                        printf("\nLa multiplicacion entre %.1f y %.1f es: %.1f \n",operando1,operando2,resultado);
                    break;
                    case 'e':
                        if(operando1 == 0)
                            {
                                resultado = 1;
                            } else
                            {
                                resultado = factorial(operando1);
                            }
                        if(operando2 == 0)
                            {
                                resultado2 = 1;
                            } else
                            {
                                resultado2 = factorial2(operando2);
                            }

                        printf("\nEl factorial de %.1f es: %.1f y el factorial de %.1f es: %.1f \n", operando1, resultado, operando2, resultado2);

                    break;
                    }
                } else
                {
                    printf("\nNo se mostrara el resultado ya que no ha ingresado una operacion");
                }
        break;
        }
    } while(opcion!=5);

    return 0;
}
