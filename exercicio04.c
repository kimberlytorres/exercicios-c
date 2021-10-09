#include <stdio.h>
#include <stdlib.h>

int main ()
{
    
    float valorhora, salario;
    int horasTrabalhadas;

    printf("\nDigite as horas trabalhadas:\n");
    scanf("%d", &horasTrabalhadas);

    printf("\nDigite o valor da hora:\n");
    scanf("%f", &valorhora);

    salario = horasTrabalhadas * valorhora;

    printf("\nValor do salario bruto = %.2f\n", salario);

    salario = salario - (salario * 0.06);

    printf("\nValor do salario liquido = %.2f\n", salario);

return 0;
}