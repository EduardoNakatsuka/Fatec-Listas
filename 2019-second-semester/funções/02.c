#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
/*Crie uma fun��o em linguagem C que receba 3 n�meros e retorne o maior
valor.*/
void numeroMaior(int n1, int n2, int n3){
	int calc;
	if(n1 > n2 && n1 > n3){
		printf("O n�mero maior �: %d", n1);
	}else if(n2 > n1 && n2 > n3){
		printf("O n�mero maior �: %d", n2);
	}else{
		printf("O n�mero maior �: %d", n3);
	}
}
main(){
	 setlocale(LC_ALL, "portuguese");
	 numeroMaior(10,6,5);
}

