/* 1. Leia um vetor de 10 valores inteiros e exiba todos os valores ímpares. */

#include<stdio.h>

int main () {
    int vector[10], i = 0;
    
    for (i = 0; i < 10; i++) {
        printf("\nDigite um valor inteiro: ");
        scanf("%d", &vector[i]);
    }
    
    printf("\nOs numeros impares sao: ");
    
    for (i = 0; i < 10; i++) {
        if (vector[i] % 2 != 0) {
            printf("\n\t%d", vector[i]);
        }
    }
}

