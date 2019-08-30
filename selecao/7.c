#include<stdio.h>

int main () {
    int age;
    
    printf("Qual a idade do nadador? ");
    scanf("%d", &age);
    
    if (age < 5) {
        printf("Nao pode ser nadador!");
    } else if (age >= 5 && age <= 7) {
        printf("Infantil A!");
    } else if (age >= 8 && age < 11) {
        printf("Infantil B!");
    } else if (age >= 11 && age < 14) {
        printf("Juvenil A!");
    } else if (age >= 14 && age < 18) {
        printf("Juvenil B!");
    } else {
        printf("Adulto!");
    }
}

