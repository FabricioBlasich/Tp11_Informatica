/* 10. Realizar un programa que solicite una fecha (ingresando día, mes y año), luego deberá
realizar un control de la misma para considerarla válida, es decir que el valor numérico de
día, mes y año sean positivos; día no debe superar el valor 31 y mes el valor 12. El
programa deberá mostrar el mensaje correspondiente para cada caso. */
#include <stdio.h>
int main(){
    int dia, mes, ano;
    printf("Ingresar dia: ");
    scanf("%i",&dia);
    printf("\nIngrsar mes: ");
    scanf("%i", &mes);
    printf("\ningresar año: ");
    scanf("%i", &ano);
    if (dia < 1 || dia > 32)
    {
        printf("El numero de dia ingresado no es correcto\n");
        dia = 0;
        printf("Fecha = %i",dia);
    }
    else{
        printf("Fecha = %i",dia);
    }
    if (mes < 0 || mes > 12)
    {
        printf("El numero de mes ingresado no es correcto\n");
        mes = 0;
        printf("/%i",mes);
    }
    else{
        printf("/%i", mes);
    }
    printf("/%i", ano);
    return 0;


    
}