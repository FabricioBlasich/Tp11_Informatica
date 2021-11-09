/* 1. Ingresar dos números enteros y luego presentar por pantalla el producto de ellos */
#include <stdio.h>
int main(){
    int numeroA, numeroB, Producto;
    printf("Por favor ingrese dos numeros\n" );
    printf("Primer numero: ");
    scanf("%i", &numeroA);   
    printf("\nSegundo numero: ");
    scanf("%i", &numeroB);
    Producto = numeroA * numeroB;
    printf("\nEl producto de los numeros es: %i", Producto);
    return 0;
}
