/* 9. Ingresar dos números enteros, determinar si fueron ingresados en orden creciente,
decreciente o si son iguales, presentar por pantalla el mensaje correspondiente.
(Resuelto) */
#include <stdio.h>
int main(){
    int numeroA, numeroB;
    printf("Por favor, ingrese dos numeros.\nPrimer numero: ");
    scanf("%i", &numeroA);
    printf("\nSegundo numero: ");
    scanf("%i", &numeroB);
    if (numeroA == numeroB)
    {
        printf("Los numeros son iguales");
    }
    else{
        if (numeroA > numeroB)
        {
            printf("Los numeros fueros ingresados en orden decreciente");
        }
        else{
            printf("Los numeros fueron ingresados en orden creciente");
        }
    }
    return 0;

}
