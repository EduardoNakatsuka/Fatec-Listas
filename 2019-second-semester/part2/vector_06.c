/* 6. Ler um vetor que contenha as notas de uma turma de 10 alunos. Calcular a média da turma e contar quantos alunos obtiveram nota acima desta média calculada. Escrever a média da turma e o resultado da contagem.
*/

#include<stdio.h>

int main () {
    float grades[10], average = 0;
    int i = 0, above_average = 0, total = 0;
    
    for (i = 0; i < 10; i++) {
        printf("\nDigite a nota do aluno: ");
        scanf("%f", &grades[i]);
        
        total += grades[i];
    }
    
    average = total / 10;
    
    for (i = 0; i < 10; i++) {
        if (grades[i] > average) {
            above_average++;
        }
    }
    
    printf("\nA media dos alunos foi: %.2f, e o total de alunos acima da media foi: %d", average, above_average);
}

