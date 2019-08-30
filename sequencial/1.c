#include<stdio.h>

int main () {
    int number = 0;

    printf("Digite o numero: ");

    scanf("%d", &number);

    printf("\nO numero anterior é %d e o proximo é %d", number - 1, number + 1);
}

