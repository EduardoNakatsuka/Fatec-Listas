#include<stdio.h>

int main () {
    int number1 = 0, number2 = 0, i = 0;
    
    do {
        printf("Escreva o primeiro numero: ");
        scanf("%d", &number1);
        
        printf("\nEscreva o segundo numero: ");
        scanf("%d", &number2);
    } while (number1 > number2);
    
    printf("\nOs numeros são: ");
    
    for (i = number1 + 1; i < number2; i++) {
        printf("%d - ", i);
    }
}
