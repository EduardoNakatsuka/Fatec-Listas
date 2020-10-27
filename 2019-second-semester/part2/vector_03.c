/* 3. Leia um vetor de 12 posições e em seguida ler também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.
*/

#include<stdio.h>

int main () {
    int vector[12], x = 0, y = 0, i = 0, total = 0;
    
    for (i = 0; i < 12; i++) {
        printf("\nDigite um valor inteiro: ");
        scanf("%d", &vector[i]);
    }
    
    printf("\nDigite agora a primeira chave que quer buscar: ");
    scanf("%d", &x);
    
    printf("\nDigite agora a segunda chave que quer buscar: ");
    scanf("%d", &y);

    total = vector[x - 1] + vector[y - 1];
    printf("\nO resultado da soma dessas duas chaves e: %d", total);
}

