/* 4. Dado el radio de un círculo, presentar por pantalla el diámetro, el perímetro y el área del
círculo. Realizar el control de que el valor del radio sea un número positivo. */
#include <stdio.h>
int main(){
    float radio, diametro, perimetro, area;
    do
    {
        printf("Por favor, ingrese el radio del circulo.\nRadio del circulo: ");
        scanf("%f", &radio);
    } while (radio < 1);
    diametro = 2 * radio;
    perimetro = 2 * 3.14 * radio;
    area = 3.14 * radio * radio;
    printf("El diametro del circulo es %f, su perimetro es %f y su area %f", diametro, perimetro, area);
    return 0;
}
