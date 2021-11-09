/* 13. Durante un intervalo de 3 meses, una persona debe realizar cada mes un análisis de sangre
para determinar su cantidad de glóbulos rojos. Se necesita saber si en el intervalo de los 3
meses, los valores obtenidos de glóbulos rojos aumentan por cada mes que pasa, o si
descienden por cada mes que pasa, o si no se da ninguno de los dos casos anteriores.
Realizar un programa que permita ingresar el valor de glóbulos rojos por cada mes y luego
muestre el mensaje correspondiente. */
#include <stdio.h>
int main(){
    float analisis1, analisis2, analisis3;
    printf("Por favor, Ingrese los valores de globulos rojos obtenidos en cada analisis.\nPrimer Analisis: ");
    scanf("%f", &analisis1);
    printf("Segundo Analisis: ");
    scanf("%f",&analisis2);
    printf("Tercer Analisis: ");
    scanf("%f", &analisis3);
    if (analisis1 == analisis2 && analisis1 == analisis3)
    {
        printf("La cantidad de globulos rojos no vario ");
    }
    else{
        if (analisis1 >= analisis2 && analisis2 >= analisis3)
        {
            printf("La cantidad de globulos rojos descendio");
        }
        else{
            if (analisis1 <= analisis2 && analisis2 <= analisis3)
            {
                printf("La cantidad de globulos rojos Aumento");
            }
            else{
                if (analisis1 >= analisis2 && analisis2 <= analisis3)
                {
                    printf("La cantidad de globulos rojos descendio el segundo mes y aumento al tercero");
                }
                else if (analisis1 <= analisis2 && analisis2 >= analisis3)

                {
                    printf("La cantidad de globulos rojos aumento el segundo mes y disminuyo al tercero");
                }
                
                
            }
        }
    }
    return 0;
}

