#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
/*Crie uma estrutura para definir um produto contendo nome, peso e preco.
Definir uma variável global para armazenar 8 produtos, um procedimento para
preencher os dados dos produtos, uma função para calcular a média de
preços, uma função para calcular o produto mais leve. Deve existir um menu
para acessar as funcionalidades do programa. */
struct produto{
	char nome[30];
	float peso;
	float preco;
};
produto produtos[8];
void cadastrarProdutos(){
	int i;
	system("cls");
	for (i=0; i<8; i++){
		printf("Digite o nome: ");
		fflush(stdin);
		gets(produtos[i].nome);
		printf("Digite o peso: ");
		scanf("%f", &produtos[i].peso);
		printf("Digite o preco: ");
		scanf("%f", &produtos[i].preco);
	}
}
float calcularMedia(){
	int i;
	float media=0;
	for (i=0; i<8; i++){
		media += produtos[i].preco;
	}
	return media / 8;
}
float calcularMaisLeve(){
	int i;
	float menorPeso;
	for (i=0; i<8; i++){
		if (produtos[i].peso<menorPeso){
			menorPeso = produtos[i].peso;
		}
	}	
	return menorPeso;
}
int main(){
	setlocale(LC_ALL, "portuguese");
	int option=3;
	while (option!=0){
	printf("\nDigite uma opcao");
	printf("\n(1)Cadastrar Produtos");
	printf("\n(2)Calcular Media de precos");
	printf("\n(3)Calcular produto mais leve");
	printf("\n(0)Sair!\n");
	scanf("%d", &option);
	switch(option){
		case 0:
			break;
		case 1:
			cadastrarProdutos();
			break;
		case 2:
			printf("\nMedia de precos: R$ %.2f", calcularMedia());
			break;
		case 3:
			printf("\nProduto mais leve tem peso de %.2f", calcularMaisLeve());
			break;
		default:
			printf("\nOpcao invalida");
		}
	}
	system("pause");
}
