#include<stdio.h>
#include<string.h>

/*FaÁa um programa em C em que um procedimento receba uma frase do usu·rio e
 mostre a frase, palavra por palavra, uma em cada linha diferente.*/
int main () {
    char phrase[120];
    char total;
    int i = 0;
    
    printf("Digite a frase: ");
    gets(phrase);
    
    for( i=0 ; i < strlen(phrase) ;i++) {
        if (phrase[i] != ' ') {
            printf("%c", phrase[i]);
        } else {
            printf("\n");
        }
    }
}

