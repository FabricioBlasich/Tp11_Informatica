/* 3. Leer cuatro números enteros, calcular y presentar por pantalla el producto, la suma y la
media aritmética (promedio) de los números ingresados. En caso de que alguno de los
valores sea 0 volver a solicitar el ingreso de ese valor. */
#include <stdio.h>
int main(){
    int numeroA, numeroB, numeroC, numeroD, suma = (numeroA + numeroB + numeroC + numeroD);
    float producto = (numeroA * numeroB * numeroC  * numeroD), promedio = suma / 4;
    printf("Por favor, Ingrese cuatro numeros, distintos a 0. \n");
    
    do
    {
        printf("Primer Numero: ");
        scanf("%i", &numeroA);
    } while (numeroA == 0);
    do
    {
        printf("Segundo Numero: ");
        scanf("%i", &numeroB);
    } while (numeroB == 0);
    do
    {
        printf("Tercer Numero: ");
        scanf("%i", &numeroC);
    } while (numeroC == 0);
    do
    {
        printf("Cuarto Numero: ");
        scanf("%i", &numeroD);
    } while (numeroD == 0);
    
    printf("La suma de los numeros es igual a %i\nEl prodducto de los numeros es igual a %f\nEl promedio de los numeros es igual a %f",suma,producto,promedio);
    return 0;


}
