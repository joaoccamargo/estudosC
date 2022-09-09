/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numeros[5] = {10,12,14,16,18};
    scanf("%d", &numeros[1]);
    printf("%d", numeros[1]);
    numeros[3] = 50;
    printf("\n%d", numeros[3]);
    
    return 0;
}
