#include<stdio.h>
#include<string.h>

/*FaÁa um programa em C que receba uma phrase do usu·rio e mostre a phrase inversemente
 (usar for).*/
int main () {
    char phrase[120], inverse[120];
    int i = 0 , j = 0;
    
    printf("Digite a frase: ");
    gets(phrase);
    
    j = strlen(phrase) - 1;
    
    for (i=0; phrase[j] != '\0'; i++) {
        inverse[j] = phrase[i];
        j--;
    }
    
    inverse[i]='\0';
    strcpy(phrase,inverse);
    
    printf("A phrase invertida e: \n%s", phrase);
}

