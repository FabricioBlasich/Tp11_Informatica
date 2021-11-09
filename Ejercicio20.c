/* 20. Presentar por pantalla todos los números enteros positivos que tengan cuatro dígitos
utilizando una estructura "while".*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int contador = 1000;
    while (contador < 10000)
    {
        printf("%i ", contador);
        contador = contador + 1;
    }
    
    return 0;
}
