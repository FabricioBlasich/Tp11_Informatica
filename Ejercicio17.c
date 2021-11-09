/*17. Presentar por pantalla los N primeros números impares positivos (Resuelto) */
#include <stdio.h>
int main()
{
    int cantidadN, impar= 1, contador = 0;
    printf("Por favor, Ingrese la candidad de numeros impares que desee ver.\nCantidad Impares: ");
    scanf("%i", &cantidadN);
    while (contador < cantidadN)
    {
        impar = impar + 2;
        printf("%i ", impar);
        contador = contador + 1;
    }
    

    return 0;
}

