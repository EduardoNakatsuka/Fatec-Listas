#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
/*Criar uma struct �cliente� com codigo, nome e rg. Declare uma vari�vel global do tipo
cliente. Crie um procedimento para preencher os dados do cliente e outro
procedimento para exibir os dados do cliente. Crie, no main, um menu para o usu�rio
poder optar por: sair, cadastrar e exibir.*/
struct Cliente{
    int codigo;
    char nome[200];
    char rg[14];
} ;
Cliente cliente;
void menu();
void inicializar();
void imprimir();
void cadastrar();
int main()
{
    setlocale(LC_ALL,"portuguese");
    menu();
    system("pause");
}
void menu()
{
    int opcao;
    do
    {
    	system("cls");
    	printf(" \n Op��es: ");
        printf(" \n 1. Inicializar a Estrutura" );
        printf(" \n 2. Imprimir a Estrutura" );
        printf(" \n 3. Cadastrar Cliente" );
        printf(" \n 4. Para sair. \n " );
        printf(" \n Digite a op��o desejada: ");
        scanf("%d%*c", &opcao);
        switch(opcao)
        {
            case 1:
                inicializar();
            break;
            case 2:
                imprimir();
            break;
            case 3:
                cadastrar();
            break;   
            default:
                 printf(" \n Op��o n�o existente. ");
            break;
        }
    }
    while(opcao!=4);
}
 void inicializar()
{
    cliente.codigo = 0;
    strcpy(cliente.nome, "NULL");
    strcpy(cliente.rg, "NULL");
    system("pause");
}
 void cadastrar()
{
	
    printf(" Digite o c�digo do cliente: ");
    scanf("%d", &cliente.codigo);
    printf(" Digite o nome do cliente: ");
    fflush(stdin);
    gets(cliente.nome);
    printf(" Digite a rg do cliente: ");
    scanf("%s", &cliente.rg);
    system("pause");
}
 void imprimir()
{
    printf(" \n O c�digo do cliente �: %d ", cliente.codigo);
    printf(" \n O nome do cliente �: %s ", cliente.nome);
    printf(" \n A rg do cliente �: %s ", cliente.rg);
    printf(" \n \n");
    system("pause");
}
