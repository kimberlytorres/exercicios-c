#include <stdio.h>
#include <stdlib.h>

#define milimetro_pol 25.4

int main ()
{
    float temperaturaF, temperaturaC, polegadas, milimetros;

    printf("\nDigite a temperatura em Fahrenheit:\n");
    scanf("%f", &temperaturaF);

    printf("\nDigite a quantidade de chuva:\n");
    scanf("%f", &polegadas);
   
    temperaturaC = (5 * temperaturaF -160)/9;
    milimetros = polegadas * milimetro_pol;

    printf("\nA temperatura em Celsius eh: %.2f\n", temperaturaC);

    printf("\n O equivalente em milimetros eh: %.2f\n", milimetros);

return 0;
}   