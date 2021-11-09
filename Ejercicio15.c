/* 15. Presentar por pantalla los números del 1 al 40 que sean pares utilizando una estructura
"for". */
#include <stdio.h>
int main(){
    int contador;
    for (contador = 0; contador <= 40; contador = contador + 2 )
    {
        
        printf("%i ", contador);
    }
    return 0;
}

