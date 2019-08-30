#include<stdio.h>

int main () {
    int number = 0, i = 0, result = 0;

    printf("Digite um número: ");
    scanf("%d", &number);
    
    for (i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            result++;
        }
    }
    
    if (result == 0)
        printf("%d é um número primo\n", number);
    else
        printf("%d não é um número primo\n", number);
    
    return 0;
}

