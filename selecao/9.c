#include<stdio.h>

int main () {
    const float MANAGER = 1.10;
    const float ENGINEER = 1.20;
    const float TECHNICIAN = 1.30;
    
    int code = 0;
    float salary = 0, new_salary = 0;
    
    printf("Qual o salário? ");
    scanf("%f", &salary);
    
    printf("Qual o codigo do cargo? ");
    scanf("%d", &code);

    if (code == 101) {
        new_salary = salary * MANAGER;
    } else if (code == 102) {
        new_salary = salary * ENGINEER;
    } else if (code == 103) {
        new_salary = salary * TECHNICIAN;
    } else {
        new_salary = salary * 1.40;
    }
    
    printf("O salario antigo e: %.2f\nO novo e: %.2f\n A diferença é de: %.2f", salary, new_salary, new_salary - salary);
}
