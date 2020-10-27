/* 4. Crie um programa que copie um vetor de 10 posições de inteiros (preenchidos aleatoriamente), de trás para frente, em um segundo vetor. */

#include<stdio.h>
#include<stdlib.h>

int main () {
    int first_vector[10], second_vector[10], i = 0;

    for (i = 0; i < 10; i++) {
        first_vector[i] = rand() % 100 + 1;
        second_vector[9 - i] = first_vector[i];
    }

    printf("\nVetor invertido: ");
    for (i = 0; i < 10; i++) {
        printf("\n\t%d", second_vector[i]);
    }
}
