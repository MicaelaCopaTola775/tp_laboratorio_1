
float sumar(float x, float y)
{
    float suma;

    suma = x + y;

    return suma;
}

float restar(float x, float y)
{
    float resta;

    resta = x - y;

    return resta;
}

float multiplicar(float x, float y)
{
    float multiplicacion;

    multiplicacion = x * y;

    return multiplicacion;
}

float dividir(float x, float y)
{
    float division;

    division = x / y;

    return division;
}

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

