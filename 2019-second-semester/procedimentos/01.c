#include<stdio.h>
#include<string.h>

/*Crie um procedimento que receba por parâmetro dois valores reais (float) e execute a
 subtração do primeiro valor pelo segundo, em seguida exiba o resultado.*/

void subt () {
    float num,num2,result;
    
    printf("Informe o 1° Valor:");
    scanf("%f",&num);
    
    printf("Informe o 2° Valor:");
    scanf("%f",&num2);
    
    result = num - num2;
    printf("\n resultado = %.1f",result);
}

int main() {
    subt();
    
    exit(0);
}
