#include<stdio.h>

// 15. Entrar com 20 números e imprimir a soma dos positivos e o total de números negativos.

int main(){
    int total_negative_numbers=0, i=0;
    float number=0.0, sum_positive_numbers=0.0;
    
    for(i=0; i<20; i++){
        printf("Entre com um número: ");
        scanf("%f", &number);
        if(number < 0.0)
        {
            total_negative_numbers += 1;
        }else{
            sum_positive_numbers += number;
        }
    }
    
    printf("\nSoma dos números positivos: %f", sum_positive_numbers);
    printf("\nTotal de números negativos: %d", total_negative_numbers);
    
    return 0;
}

