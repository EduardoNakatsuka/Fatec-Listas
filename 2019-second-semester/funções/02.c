#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
/*Crie uma função em linguagem C que receba 3 números e retorne o maior
valor.*/
void numeroMaior(int n1, int n2, int n3){
	int calc;
	if(n1 > n2 && n1 > n3){
		printf("O número maior é: %d", n1);
	}else if(n2 > n1 && n2 > n3){
		printf("O número maior é: %d", n2);
	}else{
		printf("O número maior é: %d", n3);
	}
}
main(){
	 setlocale(LC_ALL, "portuguese");
	 numeroMaior(10,6,5);
}

