/*12. Dado un número entero no negativo, presentar por pantalla un mensaje indicando si dicho
número es par o impar*/
#include <stdio.h>
int main(){
    int Num;
    do
    {
        printf("Por favor, Ingrese un numero positivo.\nNumero: ");
        scanf("%i",&Num);
    } while (Num < 1);
    if (Num % 2 == 0)
    {
        printf("El numero es par");
    }
    else{
        printf("El numero es impar");
    }
    return 0;
}

