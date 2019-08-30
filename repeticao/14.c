#include<stdio.h>

// 14. Entrar com 15 números e imprimir quantos números maiores que 30 foram digitados.

int main(){
    const int MAX_QUANTITY=15;
    float numbers[MAX_QUANTITY];
    int i=0;
    
    for(i=0; i<MAX_QUANTITY; i++){
        printf("Entre com um número: ");
        scanf("%f", &numbers[i]);
    }
    
    for(i=0; i<MAX_QUANTITY; i++){
        if(numbers[i] > 30.00)
        {
            printf("\n%0.2f é maior que 30.", numbers[i]);
        }
    }
    
    return 0;
}

