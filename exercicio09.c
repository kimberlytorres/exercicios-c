#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float renda, popular, geral, arquibancadas, cadeiras;
    int publico;

    printf("\nDigite o publico total do jogo:\n");
    scanf("%d", &publico);

    popular = 0.1 * publico;
    geral = .5 * publico;
    arquibancadas = 0.3 * publico;
    cadeiras = 0.1 * publico;

    renda = (popular * 1) + (geral * 5) + (arquibancadas * 10) + (cadeiras * 20);

    printf("\nA renda do jogo eh: %.2f", renda);

return 0;
}