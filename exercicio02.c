#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    float media;

    printf("\nDigite o primeiro numero:");
    scanf("%d", &a);

    printf("\nDigite o segundo numero:");
    scanf("%d", &b);

    printf("\nDigite o terceiro numero:");
    scanf("%d", &c);

    media = (float) (a + b + c)/3;

    printf("A media entre os numeros = %.2f", media);

return 0;
}