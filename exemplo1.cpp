/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int cadastrado, ativo, logado;
    char opcao;
    
    printf("Deseja cadastrar sua conta? S/N \n");
    scanf(" %c", &opcao);
    
    if(opcao == 'S'){
        cadastrado = 1;
        printf("Conta cadastrada! \n");
    }
    
    printf("Deseja ativar sua conta? S/N \n");
    scanf(" %c", &opcao);
    
    if(opcao == 'S'){
        ativo = 1;
        printf("\nConta Ativada!\n");
    }
    
    printf("Deseja logar na conta? S/N \n");
    scanf(" %c", &opcao);
    
    if(opcao == 'S'){
        logado = 1;
        printf("\nConta logada.\n");
    }
    if((cadastrado == 1) && (ativo ==1) && (logado == 1)){
        printf("\nSeja bem vindo!\n");
    }else{
        printf("\n Nenhuma Condição confere \n");
    }
}
