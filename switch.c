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
    
    switch(opcao){
        case 1: {
            printf("\nNumero 1\n");
            break;
        }
        case 2: {
            printf("\nNumero 2\n");
            break;
        }
        default: printf("\nNumero 2\n");
    }

}
