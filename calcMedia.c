#include <stdio.h>

int main()

{

int cont;

float nota1,nota2,nota3, media;

    for (cont=1;cont<=40;cont++){

    printf ("Digite a nota 1: ");
    
    scanf("%f",&nota1);
    
    printf ("Digite a nota 2: ");
    
    scanf("%f",&nota2);
    
    printf ("Digite a nota 3: ");
    
    scanf("%f",&nota3);
    
    media=(nota1+nota2+nota3)/3;

    if (media >= 7)
    {
        printf("Aluno aprovado!\n com nota: %.2f", media);
            
    }else{
        printf("Aluno Reprovado!\n com nota: %.2f", media);
    }
    
    return 0;
}
    
}