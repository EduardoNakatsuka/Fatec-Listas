#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
/*Faça um programa em C em que um procedimento receba uma frase do usuário e
mostre a frase, palavra por palavra, uma em cada linha diferente.*/
void palavra(){
	setlocale(LC_ALL, "portuguese");
	char frase[100];
	int i;
	printf("Digite a frase: ");
	gets(frase);
	for(i=0;i<strlen(frase);i++){
		if(frase[i] != ' '){
			printf("%c", frase[i]);
		}else{
			printf("\n");
		}
	}
};
main(){
	 setlocale(LC_ALL, "portuguese");
	 palavra();
}

