/* 14. Presentar por pantalla los números del 1 al 40 utilizando una estructura "while". */
#include <stdio.h>
int main(){
    int contador = 1;
    while (contador <= 40)
    {
        printf("%i ", contador);
        contador = contador + 1;
    }
    return 0;
}