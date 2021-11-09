/* 8. Ingresar un número entero, luego presentar por pantalla un mensaje indicando si dicho
número es igual a cero, positivo o negativo */
#include <stdio.h>
int main(){
    int numero;
    printf("Por favor, ingrese un numero.\nNUMERO: ");
    scanf("%i", &numero);
    if (numero == 0 )
    {
        printf("El numero es igual a 0");
    }
    else{
        if (numero > 0)
        {
            printf("El numero es positivo");
        }
        else{
            printf("El numero es negativo");
        }
        
    }
    return 0;

}
