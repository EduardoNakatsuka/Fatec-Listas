#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<time.h>
/*Criar um programa com um vetor de inteiros com 100 posições e global. Criar um
procedimento para preencher este vetor com números aleatórios (rand) e outro
procedimento que exibirá todos os valores acima de 80.*/
int v[100];
int i;
void numeros();
void exibir();

void numeros(){
	srand(time(NULL));
	printf("Valores gerados!\n");
	for(i=0;i<100;i++){
		v[i] = rand() % 200;
		printf("\t|%d|", v[i]);
	}
};

void exibir(){
	printf("Valores maiores que 80:\n");
	for(i=0;i<100;i++){
		if(v[i] > 80){
		printf("|%d| ", v[i]);
		}
	}
};

int main(){
	 setlocale(LC_ALL, "portuguese");
		printf("\n");
	numeros();
		printf("\n\n");
	exibir();
}
