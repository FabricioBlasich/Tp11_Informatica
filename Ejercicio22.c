/* 22. Ingresar números, hasta que se ingrese un valor igual a cero, luego presentar por pantalla
la cantidad de números ingresados. */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numeros, contador = 0;
    printf("Ingrese la cantidad de numeros que desee, cuando quiera finalizar ingrese 0\n");
    while (numeros != 0)
    {
        scanf("%i", &numeros);
        contador = contador + 1;
    }
    printf("Usted a ingresado %i numeros", contador);
    return 0;
}

