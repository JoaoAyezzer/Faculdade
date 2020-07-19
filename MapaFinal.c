#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#define TAM 5

typedef struct cliente
{
    int cod;
    char nome[50]; 
    char email[50];
    char tel[50];
}cliente;

int main(){

    setlocale(LC_ALL, "Portuguese");
    int op;
    int i = 0;
    int j;
    cliente cadastro[TAM];
    cadastro[0].cod = 0;
    
    do
    {
        printf("---------------AGENDA VERSÃO BETA---------------");
        printf("\n1 - Digite 1 para inserir novo cadastro.");
        printf("\n2 - Digite 2 para mostrar clientes cadastrados.");
        printf("\n0 - Digite 0 para encerrar.\n");
        scanf("%d", &op);
        fflush(stdin);
        system("cls");
        switch (op)
        {
        case 1 :    
            if (i<TAM){
                cadastro[i].cod = (i + 1);
                printf("Insira o nome do cliente: ");
                gets(cadastro[i].nome);
                fflush(stdin);
                printf("\nInsira o e-mail do cliente: ");
                scanf("%s", &cadastro[i].email);
                fflush(stdin);
                printf("\nInsira o Telefone do cliente: ");
                gets(cadastro[i].tel);
                fflush(stdin);
                i++;    
            }else{
                printf("\n***AGENDA LOTADA***\n");
            }

            break;
        case 2 :
            if (cadastro[0].cod == 0 )
            {
                printf("\n****AGENDA VAZIA****\n");

            }else{
                for (j = 0; j < TAM; j++){
                    if ((cadastro[j].cod > 0) && (cadastro[j].cod <= TAM))
                    {
                        printf("\n***Codigo do cliente: %d", cadastro[j].cod);
                        printf("\nNome do cliente: %s", cadastro[j].nome);
                        printf("\nEmail do cliente: %s", cadastro[j].email);
                        printf("\nTelefone do cliente: %s", cadastro[j].tel);
                        printf("\n--------------------------\n");
                    }
                }
            }
            break;
        case 0 : system("exit");
            break;
        default: printf("\n****OPÇÃO INVALIDA!****\n") ;
            break;
        }
        system("\npause");
        system("cls");   
    }while (op != 0);
    return(0);
}