#include<stdio.h>

int main () {
    int numbers[2], i = 0;
    
    for (i = 0; i < 2; i++) {
        printf("Digite o numero %d: ", i + 1);
        
        scanf("%d", &numbers[i]);
    }
    
    if (numbers[0] == numbers[1]) {
        printf("Os numeros são iguais");
    } else {
        printf("Os numeros são diferentes");
    }
}

