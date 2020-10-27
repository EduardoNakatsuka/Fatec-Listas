#include<stdio.h>
#include<string.h>

/*
 Crie um procedimento que receba por par‚metro uma string, e exiba cada letra em uma
 linha diferente, porÈm tudo em mai˙sculo.
 */

int main () {
    char phrase[120];
    int i = 0;
    
    printf("Digite a frase: ");
    gets(phrase);
    
    strupr(phrase);
    
    for (i = 0 ; i < strlen(phrase); i++) {
        printf("%c\n", phrase[i]);
    }
}

