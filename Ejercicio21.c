/* 21. Presentar por pantalla todos los números enteros positivos que tengan cuatro dígitos
utilizando una estructura "for" */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int contador;
    for (contador= 1000; contador < 10000; contador++)
    {
        printf("%i ", contador);
    }
    
    return 0;
}
