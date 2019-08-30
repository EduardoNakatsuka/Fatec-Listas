#include<stdio.h>

int main () {
    int number = 0, i = 0;
    
    do {
        printf("Digite um numero entre 1 e 10: ");
        scanf("%d", &number);
    } while (number < 1 || number > 10);
    
    for (i = 1; i <= 10; i++) {
        printf("\n%d x %d = %d", number, i, number * i);
    }
}

