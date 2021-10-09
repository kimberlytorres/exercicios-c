#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char nome1, nome2, nome3;
    int idade1, idade2, idade3;
    float peso1, peso2, peso3, mediaidade, mediapeso;

   // Pessoa 1
    printf("\nNome:");
    scanf("%s", &nome1);
    
    printf("\nIdade:");
    scanf("%d", &idade1);
    
    printf("\nPeso:");
    scanf("%f", &peso3);

    // Pessoa 2
    printf("\nNome:");
    scanf("%s", &nome2);
    
    printf("\nIdade:");
    scanf("%d", &idade2);

    printf("\nPeso:");
    scanf("%f", &peso2);

    // Pessoa 3
    printf("\nNome:");
    scanf("%s", &nome3);

    printf("\nIdade:");
    scanf("%d", &idade3);

    printf("\nPeso:");
    scanf("%f", &peso3);

    mediaidade = (idade1 + idade2 + idade3)/3;
    mediapeso = (peso1 + peso2 + peso3)/3;

    printf("\nA media entre as idades eh: %.2f", mediaidade);
    printf("\nA media entre os pesos eh: %.2f", mediapeso);

return 0;
}