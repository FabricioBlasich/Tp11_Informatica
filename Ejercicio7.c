/* 7. Realice un conversor de monedas de pesos argentinos a dólares. Para ello debe solicitar al
usuario el valor en pesos a convertir y el valor de la cotización del dólar. Controlar que
ambos números sean positivos. Deberá presentar por pantalla un mensaje que diga "$ xxx
son XXX dolares". */
#include <stdio.h>
int main(){
    float valor_en_pesos, cotizacion, dolares;
    printf("Por favor, Ingrese el monto de pesos a covertir.\n");
   
    do
    {
        printf("Monto: ");
        scanf("%f", &valor_en_pesos);
    } while (valor_en_pesos <1);
    printf("\nPor favor, Ingrese la cotizacion del dolar.");
    do
    {
        printf("\nCotizacion: ");
        scanf("%f", &cotizacion);
    } while (cotizacion <1);
    dolares = valor_en_pesos / cotizacion;
    printf("\n$%f son %f dolares", valor_en_pesos,dolares);
    return 0;


}
