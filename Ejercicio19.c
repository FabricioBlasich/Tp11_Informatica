/* 19. Ingresar un número positivo, luego presentar por pantalla el número ingresado y su
invertido. Ejemplo: si se ingresa el número 5219 -> el invertido es 9125 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numero, auxiliar, inverso= 0;
    do
    {
        printf("Por favor, Ingrese un numero positivo.\nNumero: ");
        scanf("%i",&numero);
    } while (numero < 1);
    auxiliar = numero;
    
    while (auxiliar > 0)
    {
        inverso = inverso * 10 + auxiliar % 10;
        auxiliar = auxiliar / 10;
    }
    printf("El invertido de %i es %i", numero, inverso);
    
    return 0;
}


