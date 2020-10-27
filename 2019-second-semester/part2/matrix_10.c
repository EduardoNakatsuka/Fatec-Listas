/*
10. Crie duas matrizes 3x3. Preencha uma das matrizes com dados aleatórios entre 1 e 50 (rand), em seguida exibir os valores de trás para frente.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
    srand(time(NULL)); // Isso gera um warning na minha IDE :<
    
    int matrix[3][3], inverted_matrix[3][3], l = 0, c = 0, random_number = 0;
    
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            random_number = rand() % 50 + 1;
            printf("\nSalvando o valor %d na posicao %d x %d;", random_number, l + 1, c + 1);
            matrix[l][c] = random_number;
            inverted_matrix[2 - l][2 - c] = random_number;
        }
    }
    
    printf("\nMatriz Inversa: \n\n");
    for (l = 0; l < 3; l++) {
        for (c = 0; c < 3; c++) {
            printf("%d\t", inverted_matrix[l][c]);
        }
        printf("\n");
    }
}


