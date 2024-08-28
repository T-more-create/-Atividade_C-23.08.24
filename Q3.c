#include <stdio.h>
#include <stdlib.h>

int main() {
    float arr[10]; 
    
    for (int i = 0; i < 10; i++) {
        printf("O endereço do elemento arr[%d] é: %p\n", i, (void*)&arr[i]);
    }

    return 0;
}
