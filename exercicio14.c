#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, ano_atual;
    float salario, novo_salario, percentual;

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    
    salario = 1000;
    percentual = 1.5/100;
    novo_salario = salario + (percentual * salario);

    for (i = 2007; i <= ano_atual; i++) {
        percentual = 2 * percentual;
        novo_salario = novo_salario + percentual * novo_salario;
    } 
    printf("R$ %.4f", novo_salario);
    
    return 0;
}