#include<stdio.h>

int main () {
    float salary;
    const float bonus = 1.05;
    const float tax = 0.93;

    printf("Qual o salario? ");
    scanf("%f", &salary);

    salary *= bonus;
    salary *= tax;

    printf("\nO resultado é: %.2f", salary);
}

