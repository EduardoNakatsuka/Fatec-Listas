#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
/*Crie um procedimento receba um valor real e dentro deste � feito a chamada
de uma fun��o, passando por par�metro o valor recebido. A fun��o deve
retornar o valor multiplicado por 10 e exibido o resultado dentro do
procedimento.*/
float multiplicar(float numero){
	float multiplicado = numero * 10;
	return multiplicado;
}
void imprimirFuncao(float numero){
	float retorno = multiplicar(numero);
	printf("%.1f", retorno);
}
main(){
	setlocale(LC_ALL, "portuguese");
	float numero;
	printf("Digite um numero: ");
	scanf("%f", &numero);
	imprimirFuncao(numero);
	system("pause");	 	 
}
