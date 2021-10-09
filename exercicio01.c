#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, soma;

    printf("Digite um numero:\n");
    scanf("%d", &a);

    printf("Digite outro numero:\n");
    scanf("%d", &b);

    soma = a + b;

    printf("\nsoma dos dois numeros eh:\n %d", soma);

    return 0;
}