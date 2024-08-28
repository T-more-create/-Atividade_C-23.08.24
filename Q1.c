#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;

    int *ptrA = &a;
    int *ptrB = &b;

    if (ptrA > ptrB) {
        printf("O maior endereço é o de 'a': %p\n", (void*)ptrA);
    } else {
        printf("O maior endereço é o de 'b': %p\n", (void*)ptrB);
    }

    return 0;
}
