#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<time.h>
/*Crie uma fun��o em linguagem C chamado Dado() que retorna, atrav�s de
sorteio (rand), um n�mero de 1 at� 6.*/
void dado(){
	int r= 1+rand() % 6;	
	printf("O n�mero do dado �: %d", r);
};
main(){
	 setlocale(LC_ALL, "portuguese");
	 dado();
}

