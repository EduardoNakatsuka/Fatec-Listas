#include<stdio.h>

int main () {
    int yearBorn = 0;
    int year = 0;
    int age = 0;
    int futureAge = 0;

    printf("Qual o ano de nascimento? ");
    scanf("%d", &yearBorn);

    printf("\nQual o ano atual? ");
    scanf("%d", &year);

    age = year - yearBorn;
    futureAge = 2038 - yearBorn;
    printf("\nA pessoa tem %d anos, e terá %d em 2038", age, futureAge);
}

