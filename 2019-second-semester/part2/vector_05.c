/* 5. Implemente um programa em C que preencha um vetor de dimensão 10 com valores do usuário e calcule a soma dos elementos positivos que se encontrarem nas posições pares do vetor.
*/

#include<stdio.h>

int main () {
    int vector[10], i = 0, sum = 0;
    
    for (i = 0; i < 10; i++) {
        printf("\nDigite um valor inteiro: ");
        scanf("%d", &vector[i]);
        
        if (i % 2 == 0 && vector[i] > 0) {
            sum += vector[i];
        }
    }
    
    printf("\nA soma dos valores pares e positivos e: %d", sum);
}
