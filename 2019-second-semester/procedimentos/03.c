#include<stdio.h>
#include<string.h>

/*Faça um procedimento que recebe a idade de um nadador por parâmetro e exiba a
 categoria desse nadador de acordo com a tabela abaixo:*/

void Category(int age) {
    if(age >= 5 && age <= 7){
        printf("Infantil A\n");
    }
    else if(age >= 8 && age <= 10){
        printf("Infantil B\n");
    }
    else if(age >= 11 && age <= 13){
        printf("Juvenil A\n");
    }
    else if(age >= 14 && age <= 17){
        printf("Juvenil B\n");
    }
    else if(age >= 18){
        printf("Adulto\n");
    }
    else{
        printf("Sem categoria\n");
    }
}

int main () {
    int age;
    
    printf("Digite a sua idade:");
    scanf("%d",&age);
    
    Category(age);
    system("pause");
}
