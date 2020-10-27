/* 2. Leia um vetor de 6 valores reais e exiba a média, o maior e o menor valor. */

#include<stdio.h>

int main () {
    int vector[6], i = 0, biggest_value = 0, lowest_value = 0, total = 0;
    float average = 0.0;
    
    for (i = 0; i < 6; i++) {
        printf("\nDigite o um numero inteiro: ");
        scanf("%d", &vector[i]);
        total += vector[i];
    }
    
    biggest_value = vector[0];
    lowest_value = vector[0];
    average = total / 6;
    
    for (i = 1; i < 6; i++) {
        if (biggest_value < vector[i]) {
            biggest_value = vector[i];
        }
        
        if (lowest_value > vector[i]) {
            lowest_value = vector[i];
        }
    }
    
    printf("A media e: %.2f, o maior valor e: %d, o menor valor e: %d\n", average, biggest_value, lowest_value);
}

