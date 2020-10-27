#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
/*Um professor fez 3 provas durante um semestre, mas só vai levar em conta as
duas notas mais altas para calcular a média. Faça uma função em C que
receba o valor das 3 notas por parâmetro e retorne a média, considerando a
condição das duas maiores notas.*/
void prova(float n1=0.0, float n2=0.0, float n3=0.0){
	float media=0.0;
	if(n1 >= n2 && n1 >= n3 && n2 >= n3){
		media = (n1+n2)/2;
		printf("A média é: %.1f", media);
	}else if(n2 >= n1 && n2 >= n3 && n3 >= n1){
		media = (n2+n3)/2;
		printf("A média é: %.1f", media);
	}else if(n3 >= n1 && n3 >= n2){
		media = (n1+n3)/2;
		printf("A média é: %.1f", media);
	}
}
main(){
	 setlocale(LC_ALL, "portuguese");
	 prova(10.0, 8.0, 6.0);
}

