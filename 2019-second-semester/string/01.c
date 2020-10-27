#include<stdio.h>
#include<string.h>

/*
 Faça um programa em C que receba uma frase qualquer fornecida pelo usuário, calcule
 e mostre quantos caracteres a frase possui.
 */
int main () {
    char phrase[120];
    int i = 0, total = 0;
    
    printf("Digite uma frase: ");
    gets(phrase);
    
    for(i = 0; i < strlen(phrase); i++){
        if(phrase[i] != ' '){
            total++;
        }
    }
    printf("\nO total de caracteres e: %d", total);
}




