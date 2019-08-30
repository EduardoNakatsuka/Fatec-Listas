#include<stdio.h>

int main () {
    int entries = 0, total = 0, i = 0, number = 0;
    
    printf("Quantas entradas irao ser digitadas? ");
    scanf("%d", &entries);
    
    for (i = 0; i < entries; i++) {
        printf("\nQual o numero? ");
        scanf("%d", &number);
        
        if (number > 100 && number < 200) {
            total++;
        }
    }
    
    printf("\nO total de numeros entre 100 e 200 é: %d", total);
    
    return 0;
}

