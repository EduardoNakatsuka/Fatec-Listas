#include<stdio.h>
#include<string.h>
/*FaÁa uma funÁ„o que conta o n˙mero de ocorrÍncias de um caractere numa string (usar
for)*/

int main () {
    char phrase[120];
    char randomChar;
    int i = 0 , cont = 0;

    printf("Digite uma letra ou caractere: ");
    scanf("%c", &randomChar);
    fflush(stdin);

    printf("\nDigite a frase: ");
    gets(phrase);
    
    for (i = 0; i < strlen(phrase); i++){
		if (randomChar == phrase[i]){
			cont++;
		}
	}
	printf("\nO numero de ocorrencias do caractere %c foi de: %d", randomChar, cont);
}


