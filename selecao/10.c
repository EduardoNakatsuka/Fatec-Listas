#include<stdio.h>

int main () {
    char category;
    char name[10];
    float salary = 0, new_salary = 0;
    
    printf("Qual o nome do funcionario? ");
    scanf("%s", name);
    
    printf("\nQual o salario do funcionario? ");
    scanf("%f", &salary);
    
    printf("\nQual a categoria do funcionario(m/h)? ");
    scanf("%s", &category);
    
    if (category == 'm' || category == 'M') {
        new_salary = salary * 1.10;
    } else if (category == 'h' || category == 'H') {
        new_salary = salary * 1.40;
    } else {
        printf("Categoria invalida");
        return 1;
    }
    
    printf("O novo salario do funcionario %s, e agora de: %.2f", name, new_salary);
}

