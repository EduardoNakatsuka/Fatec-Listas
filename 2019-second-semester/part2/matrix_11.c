/*  Crie um programa que recebe uma matriz bidimensional inteira 5x5 e um inteiro que indica uma de suas linhas, e retorna a média dos valores daquela linha apenas.
*/

#include<stdio.h>

int main () {
    int matrix[5][5], l = 0, c = 0, wanted_line = 0, total = 0;
    float average = 0.0;
    
    
    for (l = 0; l < 5; l++) {
        for (c = 0; c < 5; c++) {
            printf("\nDigite o valor da tabela %d, %d: ", l + 1, c + 1);
            scanf("%d", &matrix[l][c]);
        }
    }
    
    do {
        printf("\nDigite a linha dentro de 1 e 5: ");
        scanf("%d", &wanted_line);
        
        if (wanted_line < 1 || wanted_line > 5) {
            printf("\nLinha invalida, digite novamente!");
        }
    } while (wanted_line < 1 || wanted_line > 5);
    
    
    for (c = 0; c < 5; c++) {
        total += matrix[wanted_line][c];
    }
    
    average = total / 5;
    
    printf("\n\nA media da linha e: %.2f", average);
}

