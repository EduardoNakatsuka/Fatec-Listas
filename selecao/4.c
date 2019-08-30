
#include<stdio.h>

int main () {
    const float LIMIT = 0.30;
    float salary = 0, installment = 0;
    
    printf("Qual e o salario? ");
    scanf("%f", &salary);
    
    printf("\nQual é o valor da parcela? ");
    scanf("%f", &installment);
    
    if (salary * LIMIT < installment) {
        printf("\nO emprestimo NAO pode ser concedido.");
    } else {
        printf("\nO emprestimo pode ser concedido.");
    }
}

