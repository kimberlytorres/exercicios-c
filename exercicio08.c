#include <stdio.h>
#include <stdlib.h>

int main()
{
   float GA, GB, GC, media;

   printf("\nEscreva a nota GA:");
   scanf("%f", &GA);

   printf("\nEscreva a nota GB:");
   scanf("%f", &GB);

   media = (GA + GB)/2;

   if(media >= 6){
       printf("\nAluno aprovado. Media igual a:%.2f", media);
   }else{
        printf("\nDigite a nota GC:");
        scanf("%f", &GC);
    
        media = (GA + GB + GC)/3;   
    
     if(media >= 6){
        printf("\nAluno aprovado. Media final:%.2f", media);
    }
    else 
    {
        printf("\nAluno reprovado. Media final:%.2f", media);
    }
}
system("pause");
return 0;

}