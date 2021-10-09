#include<stdio.h>
#include <stdlib.h>

int main () {
    int n[5];
    int i;
    int maior = 0;
    printf("Digite os numeros:\n");
    for (i = 0; i < 5; i++) {
        printf("Numero %d:", i);
        scanf("%d", &n[i]);
    if (n[i] > maior) {
        maior = n[i];
    }
    }
    printf("Maior numero: %d\n", n[i]);
return 0;
}