#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
/*Um professor fez 3 provas durante um semestre, mas s� vai levar em conta as
duas notas mais altas para calcular a m�dia. Fa�a uma fun��o em C que
receba o valor das 3 notas por par�metro e retorne a m�dia, considerando a
condi��o das duas maiores notas.*/
void prova(float n1=0.0, float n2=0.0, float n3=0.0){
	float media=0.0;
	if(n1 >= n2 && n1 >= n3 && n2 >= n3){
		media = (n1+n2)/2;
		printf("A m�dia �: %.1f", media);
	}else if(n2 >= n1 && n2 >= n3 && n3 >= n1){
		media = (n2+n3)/2;
		printf("A m�dia �: %.1f", media);
	}else if(n3 >= n1 && n3 >= n2){
		media = (n1+n3)/2;
		printf("A m�dia �: %.1f", media);
	}
}
main(){
	 setlocale(LC_ALL, "portuguese");
	 prova(10.0, 8.0, 6.0);
}

