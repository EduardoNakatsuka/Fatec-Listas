#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
/*Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou
negativo. A função deve retornar 1 para positivo e 0 para negativo.*/
void verifica();
void verifica(){
	int num;
	printf("Digite um número inteiro: ");
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

