/* 11. Ingresar tres números enteros, ordenarlos en forma ascendente y presentarlos por
pantalla. En caso de ser los tres iguales, imprimir un mensaje que diga: Son iguales.*/
#include <stdio.h>
int main(){
    int numeroA, numeroB, numeroC;
    printf("Por favor ingrese tres numeros enteros.\nPrimernumero: ");
    scanf("%i", &numeroA);
    printf("\nSegundo numero:");
    scanf("%i", &numeroB);
    printf("\nTercer numero: ");
    scanf("%i", &numeroC);

    if (numeroA == numeroB && numeroA == numeroC)
    {
        printf("Los numeros son iguales"); // A = B = c
    }
    else{
        if (numeroA >= numeroB)
        {  // A >= B
            if (numeroB >= numeroC)
            { // B >= C
                printf("%i,%i,%i", numeroA,numeroB,numeroC);
            }
            else{ // C > B
                if (numeroC > numeroA)
                { // C > A
                    printf("%i,%i,%i", numeroC,numeroA,numeroB);
                }
                else{ // A > C
                    printf("%i,%i,%i", numeroA,numeroC,numeroB);
                }
            }
        }
        else{ // B > A
            if (numeroA > numeroC)
            { //  A > C
                printf("%i,%i,%i", numeroB,numeroA,numeroC);
            }
            else{ // C > A
                if (numeroC > numeroB)
                { // C > B
                    printf("%i,%i,%i", numeroC,numeroB,numeroA);
                }
                else{ // B > C
                    printf("%i,%i,%i", numeroB,numeroC,numeroA);
                }
            }
        }
        
    }
    return 0;
}
