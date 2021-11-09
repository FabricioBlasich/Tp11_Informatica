/* 6. Convertir una medida dada en metros a sus equivalentes en decímetros y centímetros.
Presentar por pantalla las tres magnitudes con sus respectivas unidades.Realizar el control
de que el valor de la medida sea un número positivo. */
#include <stdio.h>
int main(){
    float metros, centimetros, decimetros;
    printf("Ingrese la medida en metros que desee convertir");
    do
    {
        printf("\nCantidad de metros: ");
        scanf("%f", &metros);
    } while (metros < 0);
    decimetros = metros * 10;
    centimetros = metros * 100;
    
    printf("\nLa medida ingresada fue de %f m, lo que equivale a %f dm y a %f cm",metros, decimetros,centimetros);

    return 0;
    
}

