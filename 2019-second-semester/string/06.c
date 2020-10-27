#include<stdio.h>
#include<string.h>

/*Crie uma struct chamada pessoa com os dados: nome e cpf. Crie um vetor para
 armazenar 5 pessoas. Elabore um procedimento para preencher o vetor, outro
 procedimento para exibir os nomes e cpfs cadastrados e, por fim, um procedimento
 para exibir se existe algum cpf repetido ou n„o.*/

struct person{
    char nome[60];
    char cpf[14];
};

int main () {
    person p[60], c[14];
    int i = 0, j = 0, v[5];
    int cont = 0;
    
    for (i = 0; i < 5; i++){
        
        printf("Digite o nome: ");
        gets(p[i].nome);
        
        printf("Digite o cpf: ");
        gets(c[i].cpf);
    }
    
    for (i = 0; i < 5; i++) {
        if (c[0].cpf == c[i].cpf) {
            cont++;
        }
    }
    
    for(i = 0; i < 5; i++) {
        printf("\nNome: %s", p[i].nome);
        printf("\nCPF: %s", c[i].cpf);
    }
    
    if (cont << 1) {
        printf("\n\nExistem numeros de cpf's repetidos!", cont);
    }
}

