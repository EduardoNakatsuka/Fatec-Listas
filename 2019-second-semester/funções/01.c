#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
/*Fa�a uma fun��o que recebe um valor inteiro e verifica se o valor � positivo ou
negativo. A fun��o deve retornar 1 para positivo e 0 para negativo.*/
void verifica();
void verifica(){
	int num;
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &num);
	printf("Positivo [1] Negativo [0]: ");
	if(num >= 0){
		printf("1");
	}else{
		printf("0");
	}
}
main(){
	 setlocale(LC_ALL, "portuguese");
	 verifica();
}

