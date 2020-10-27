/*
9. Leia uma matriz 6 x 6, conte e escreva quantos valores maiores que 10 ela possui.
*/

#include<stdio.h>

int main () {
    int matrix[6][6], total = 0, l = 0, c = 0;
    
    for (l = 0; l < 6; l++) {
        for (c = 0; c < 6; c++) {
            printf("\nDigite o valor da tabela %d, %d: ", l + 1, c + 1);
            scanf("%d", &matrix[l][c]);
            
            if (matrix[l][c] > 10) {
                total++;
            }
        }
    }
    
    printf("O total de valores maiores que 10 sao: %d", total);
}

