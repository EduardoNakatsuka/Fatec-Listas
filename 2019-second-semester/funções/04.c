#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<time.h>
/*Crie uma função em linguagem C chamado Dado() que retorna, através de
sorteio (rand), um número de 1 até 6.*/
void dado(){
	int r= 1+rand() % 6;	
	printf("O número do dado é: %d", r);
};
main(){
	 setlocale(LC_ALL, "portuguese");
	 dado();
}

