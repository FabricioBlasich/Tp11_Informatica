/* 5. Calcular y mostrar por pantalla, la suma y el producto de tres números reales ingresados.*/
#include <stdio.h>
int main(void)
{
    float numeroA, numeroB ,numeroC, suma, producto;
    printf("Por favor, ingrese tres numeros.\n");
    printf("Pimer numero: ");
    scanf("%f", &numeroA);
    printf("\nSegundo numero: ");
    scanf("%f", &numeroB);
    printf("\nTercer numero: ");
    scanf("%f", &numeroC);

    suma = numeroA + numeroB + numeroC;
    producto = numeroA * numeroB * numeroC;
    printf("La suma d elos numeros es %f y el producto de los mmismos es %f", suma, producto);
    return 0;
}

