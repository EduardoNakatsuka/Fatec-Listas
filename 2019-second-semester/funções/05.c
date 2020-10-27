#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
/*Faça uma função que recebe a média final de um aluno por parâmetro e
retorna o seu conceito, conforme a tabela abaixo:
Nota Conceito
de 0,0 a 4,9 D
de 5,0 a 6,9 C
de 7,0 a 8,9 B
de 9,0 a 10,0 A*/
void mediaFinal(float n1=0.0, float n2=0.0){
	char conceito;
	float media = (n1+n2)/2;
	if(media >= 0.0 && media <= 4.9){
		conceito = 'D';		
	}else if(media >= 5.0 && media <= 6.9){
		conceito = 'C';
	}else if(media >= 7.0 && media <= 8.9){
		conceito = 'B';
	}else if(media >= 9.0 && media <= 10.0){
		conceito = 'A';
	}else{
		printf("Média invalida!");
		exit(0);
	}
	printf("A média final é: %.1f \nConceito: %c", media, conceito);
}
main(){
	 setlocale(LC_ALL, "portuguese");
	 mediaFinal(10.0,10.0);
}

