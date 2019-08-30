#include<stdio.h>

int main () {
    const float LIMIT = 150.00;
    float electric_bill = 0;
    
    printf("Qual o valor da conta de luz? ");
    scanf("%f", &electric_bill);
    
    if (electric_bill > LIMIT) {
        printf("Você está gastando muito.");
    } else {
        printf("Seu gasto foi normal.");
    }
}
