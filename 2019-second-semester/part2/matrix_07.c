/*
 7. Preencher todos os valores de uma matriz 2x2, em seguida exibir todos os valores e a soma de todos os valores.
*/

#include<stdio.h>

int main () {
    int matrix[2][2], sum = 0, l = 0, c = 0;
    
    for (l = 0; l < 2; l++) {
        for (c = 0; c < 2; c++) {
            printf("\nDigite o valor da tabela %d, %d: ", l + 1, c + 1);
            scanf("%d", &matrix[l][c]);
            
            sum += matrix[l][c];
        }
    }
    
    printf("\nImprimindo a Matriz!\n\n");
    for (l = 0; l < 2; l++) {
        for (c = 0; c < 2; c++) {
            printf("%d\t", matrix[l][c]);
        }
        printf("\n");
    }
    
    printf("\nA some é: %d", sum);
}

