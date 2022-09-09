/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    for(num=num;num<=15;num=num+1){
        printf("Numero = %d ", num);
    }
    return 0;
}
