/* 23. Se ingresan N valores numéricos. Se desea saber cuántos son positivos, cuántos son
negativos y cuantos iguales a cero. */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int cantidadN,numero, cant_nula = 0, cant_pos = 0, cant_neg = 0, contador = 0;
    do
    {
        printf("Por favor ingrese la cantidad de numeros que desee ingresar (Ingrese un numero positivo)\nCanridad numeros: ");
        scanf("%i", &cantidadN);
    } while (cantidadN < 1);
    
    while (contador < cantidadN)
    {
        contador = contador + 1;
        printf("Por favor, ingrese un numero: ");
        scanf("%i", &numero);
        if (numero == 0)
        {
            cant_nula = cant_nula + 1;
        }
        else{
            if (numero > 0)
            {
                cant_pos = cant_pos + 1;
            }
            else{
                cant_neg = cant_neg +1;
            }
        }
        
    }
    printf("Usted ingreso %i numeros positivos, %i numeros negativos, %i numeros igual a 0", cant_pos, cant_neg,cant_nula);
    return 0;
}

