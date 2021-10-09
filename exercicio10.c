#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numeromes;

    printf("\nDigite o numero do mes:");
    scanf("%d", &numeromes);

    if (numeromes >= 1 && numeromes <= 12)
    {
        if(numeromes==1)
        printf("\nJaneiro\n");
        if(numeromes==2)
        printf("\nFevereiro\n");
        if(numeromes==3)
        printf("\nMarco\n");
        if(numeromes==4)
        printf("\nAbril\n");
        if(numeromes==5)
        printf("\nMaio\n");
        if(numeromes==6)
        printf("\nJunho\n");
        if(numeromes==7)
        printf("\nJulho\n");
        if(numeromes==8)
        printf("\nAgosto\n");
        if(numeromes==9)
        printf("\nSetembro\n");
        if(numeromes==10)
        printf("\nOutubro\n");
        if(numeromes==11)
        printf("\nNovembro\n");
        if(numeromes==12)
        printf("\nDezembro\n");
    }else
        printf("Mes nao existente.");
    
system("pause");
return 0;

}