#include <stdio.h>

int main() {
    int arr[5]; 
    int *ptr = arr;  

    printf("Insira 5 números inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);  
    }

    printf("O dobro de cada valor digitado é:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", 2 * (*(ptr + i)));  
    }

    return 0;
}
