#include <stdio.h>
#include <stdlib.h>

int main ()
{
    
    float salario_atual, reajuste, salario_novo;

    printf("\nDigite o valor do salario atual:\n");
    scanf("%f", &salario_atual);

    printf("\nDigite o valor do reajuste:\n");
    scanf("%f", &reajuste);

    salario_novo = salario_atual + (salario_atual * (reajuste/100));

    printf("\nValor do novo salario bruto = %.3f\n\n", salario_novo);

return 0;
}