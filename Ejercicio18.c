/* 18. Ingresar un número, luego presentar por pantalla el factorial del mismo. */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numero, contador = 0,factorial = 1;
    do
    {
        printf("Por favor, Ingrese el numero el cual desee conocer el factorial.\nNumero: ");
        scanf("%i", &numero);
    } while (numero < 0);
    
    if (numero == 0)
    {
    }
    else{
        while (contador < numero)
    {
        contador = contador + 1;
        factorial = factorial * contador;
    }
    }
    printf("El Factorial de %i es %i",numero, factorial);
    
    return 0;
}
