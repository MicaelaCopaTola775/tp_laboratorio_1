#include <stdio.h>
#include <stdlib.h>

/** \brief Resuelve la suma entre dos operandos
 * \param x Es el primer operando a sumar
 * \param y Es el segundo operando a sumar
 * \return Retorna el resultado de la suma entre los operandos
 *
 */

float sumar(float x, float y)
{
    float suma;

    suma = x + y;

    return suma;
}

/** \brief Resuelve la resta entre dos operandos
 * \param x Es el primer operando a restar
 * \param y Es el segundo operando a restar
 * \return Retorna el resultado de la resta entre los operandos
 *
 */

float restar(float x, float y)
{
    float resta;

    resta = x - y;

    return resta;
}

/** \brief Resuelve la multiplicacion entre dos operandos
 * \param x Es el primer operando a multiplicar
 * \param y Es el segundo operando a multiplicar
 * \return Retorna el resultado de la multiplicaion entre los operandos
 *
 */

float multiplicar(float x, float y)
{
    float multiplicacion;

    multiplicacion = x * y;

    return multiplicacion;
}

/** \brief Resuelve la division entre dos operandos
 * \param x Es el primer operando a dividir
 * \param y Es el segundo operando a dividir
 * \return Retorna el resultado de la division entre los operandos
 *
 */

float dividir(float x, float y)
{
    float division;

    division = x / y;

    return division;
}

/** \brief Genera el factorial del primer operando
 * \param x Es el primer operando
 *
 * \return Retorna el factorial del primer operando
 *
 */

float factorial(float x)
{
    int i;
    float respuesta = 1;

    for (i = 1; i <= x; i++)
        {
         respuesta = respuesta*i;
        }
    return (respuesta);
}

/** \brief Genera el factorial del segundo operando
 *
 * \param y Es el segundo operando
 * \return Retorna el factorial del segundo operando
 *
 */

float factorial2(float y)
{
    int i;
    float respuesta2 = 1;

    for (i = 1; i <= y; i++)
        {
         respuesta2 = respuesta2*i;
        }

    return (respuesta2);
}
