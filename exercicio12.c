#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int dia, mes, dataValida;
    dataValida = 1;

    printf("\nDigite o numero do dia:");
    scanf("%d", &dia);

    printf("\nDigite o numero do mes:");
    scanf("%d", &mes);

    if (dia >= 1 && dia <= 31)
     {
         if (mes >= 1 && mes <= 12)
         {
             if (mes==2) && (dia > 28)
             printf("\nDia invalido para fevereiro.\n");
             dataValida = 0;
         }   

         if (mes==4) || (mes==6) || (mes==9) || (mes==1)
}