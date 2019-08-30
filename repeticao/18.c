#include<stdio.h>

int main () {
    int number = 0, i = 0, total = 0;
    
    printf("Digite o numero: ");
    scanf("%d", &number);
    
    for (i = 0; i < number; i++) {
        total = number * number;
    }
    
    printf("\nO numero total: %d", total);
}
