#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
/*Faça um procedimento para verificar se um ano é bissexto ou não. Utilize a regra: um
ano bissexto é divisível por 4, mas não por 100, ou então se é divisível por 400. Exemplo:
1988 é bissexto, pois é divisível por 4 e não é por 100; 2000 é bissexto porque é divisível
por 400. O ano deve ser recebido por parâmetro.*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	int ano;
	int verifica(int ano);
	printf("Digite um ano: "); scanf("%d",&ano);
	if (verifica(ano) == 1){
	printf("%d, ano bissexto!",ano);
	}else{
	printf("%d, não é ano bissexto!",ano);
	}
}
int verifica(int x){
if(x%400==0 || x%4==0 && x%100!=0)
return 1;
else
return 0;
}
