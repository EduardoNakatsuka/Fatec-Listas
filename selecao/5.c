#include<stdio.h>

int main () {
    float salary = 0, spent = 0;
    
    printf("Qual o salario? ");
    scanf("%f", &salary);
    
    printf("\nQual o total gasto? ");
    scanf("%f", &spent);
    
    if (spent > salary) {
        printf("Orçamento estourado");
    } else {
        printf("Gastos dentro do orçamento");
    }
}

