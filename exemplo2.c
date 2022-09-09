/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int opcao;
    
    printf("Entre com um numero inteiro:\n");
    scanf("%d",&opcao);
    
    if(opcao >= 0){
        if(opcao == 0){
            printf("\nNumero Nullo");
        }else{
            printf("\nNumero positivo\n");
        }
    }else{
        printf("\nNumero negativo\n");
    }

}
