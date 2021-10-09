#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float dolar, produto, valorproduto;

    printf("\nDigite a cotacao do dolar em reais:\n");
    scanf("%f", &dolar);

    printf("\nDigite o valor do produto em dolar:\n");
    scanf("%f", &produto);

    valorproduto = produto * dolar;

    printf("\nO valor do produto em reais eh: %.2f\n\n", valorproduto);

return 0;
}
