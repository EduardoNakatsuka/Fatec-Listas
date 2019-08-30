#include<stdio.h>
#include<stdlib.h>

struct Person {
    float salary;
    char gender;
};

int main(){
    struct Person* people;
    int f_amount = 0, m_amount = 0, poor_f = 0;
    float sum_by_f = 0.0, sum_by_m = 0.0;
    
    int amount = 0, i = 0;
    
    printf("Quantidade da amostragem: ");
    scanf("%d", &amount);
    
    people = malloc(amount * sizeof(struct Person));
    
    for (i = 0; i < amount; i++) {
        printf("\nAmostra %d: \n", i+1);
        
        do {
            printf("\tSexo (M/F): ");
            fflush(stdin);
            scanf("\n%c", &people[i].gender);
        } while (people[i].gender != 'M' && people[i].gender != 'F');
        
        printf("\tSalário: ");
        scanf("%f", &people[i].salary);
    }
    
    for (i = 0; i < amount; i++) {
        if (people[i].gender == 'F') {
            f_amount += 1;
            sum_by_f += people[i].salary;
            
            if (people[i].salary <= 1500.00) {
                poor_f += 1;
            }
        } else{
            m_amount += 1;
            sum_by_m += people[i].salary;
        }
    }
    
    
    printf("A média de salário do grupo: ");
    printf("\t\nMasculino: %.2f", sum_by_m / m_amount);
    printf("\t\nFeminino: %.2f", sum_by_f / f_amount);
    printf("\nQuantidade de mulheres com salário até R$1500,00: %d", poor_f);
    
    return 0;
}
