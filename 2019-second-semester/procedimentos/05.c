#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
/*Fa�a um procedimento para verificar se um ano � bissexto ou n�o. Utilize a regra: um
ano bissexto � divis�vel por 4, mas n�o por 100, ou ent�o se � divis�vel por 400. Exemplo:
1988 � bissexto, pois � divis�vel por 4 e n�o � por 100; 2000 � bissexto porque � divis�vel
por 400. O ano deve ser recebido por par�metro.*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	int ano;
	int verifica(int ano);
	printf("Digite um ano: "); scanf("%d",&ano);
	if (verifica(ano) == 1){
	printf("%d, ano bissexto!",ano);
	}else{
	printf("%d, n�o � ano bissexto!",ano);
	}
}
int verifica(int x){
if(x%400==0 || x%4==0 && x%100!=0)
return 1;
else
return 0;
}
