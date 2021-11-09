/* 16. Presentar por pantalla los números del 1 al 40 que sean pares utilizando una estructura "do
while". */
#include <stdio.h>
int main(){
    int suma = 0;
    do
    {
        suma = suma + 2;
        printf("%i ", suma);
    } while (suma < 40);
    return 0;

}

