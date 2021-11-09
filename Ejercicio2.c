/* 2. Ingresar dos números reales, luego presentar por pantalla el valor de la suma y el
producto de los números ingresados. */
#include <stdio.h>
int main(){
    float numeroA, numeroB,Suma, Producto;
    printf("Por favor, Ingrese dos numeros reales.\n");
    printf("Primer Numero: ");
    scanf("%f", &numeroA);
    printf("\nSegundo Numero: ");
    scanf("%f", &numeroB);
    Suma = numeroB + numeroA;
    Producto = numeroA * numeroB;
    printf("La suma de los numeros es igual a %f, y el prducto de los mismo es %f", Suma,Producto);
    return 0;
}
