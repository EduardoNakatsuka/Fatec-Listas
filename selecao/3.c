#include<stdio.h>

int main () {
    int number;
    
    printf("Digite o numero: ");
    scanf("%d", &number);
    
    if (number % 5 == 0) {
        printf("\nO numero e divisivel por 5!");
    } else {
        printf("\nO numero não e divisivel por 5!");
    }
}
