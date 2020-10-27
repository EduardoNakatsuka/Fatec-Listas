/*
 8. Leia uma matriz 10 x 10 e escreva a localização (linha e a coluna) do maior valor.
*/

#include<stdio.h>

int main () {
    int matrix[10][10], l = 0, c = 0, biggest_value = 0, biggest_line = 0, biggest_col = 0;
    
    for (l = 0; l < 10; l++) {
        for (c = 0; c < 10; c++) {
            printf("\nDigite o valor da tabela %d, %d: ", l + 1, c + 1);
            scanf("%d", &matrix[l][c]);
        }
    }
    
    biggest_value = matrix[0][0];
    biggest_line = 0;
    biggest_col = 0;
    
    for (l = 1; l < 10; l++) {
        for (c = 1; c < 10; c++) {
            if (matrix[l][c] > biggest_value) {
                biggest_value = matrix[l][c];
                biggest_line = l;
                biggest_col = c;
            }
        }
    }
    
    printf("\nO maior valor é: %d, e sua localização é %d x %d", biggest_value, biggest_line + 1, biggest_col + 1);
}

