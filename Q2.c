#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    int *ptrA = &a;
    int *ptrB = &b;

    printf("Insira o valor de a: ");
    scanf("%d", ptrA);
    printf("Insira o valor de b: ");
    scanf("%d", ptrB);

    if (ptrA > ptrB) {
        printf("O conteúdo do maior endereço é: %d\n", *ptrA);
    } else {
        printf("O conteúdo do maior endereço é: %d\n", *ptrB);
    }

    return 0;
}

