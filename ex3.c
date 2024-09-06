#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i;
    char caractere[5];
    ///char caractere[5]={'a','b','c','d','k'};
     printf("la chaine de caractere est :\n");
     //scanf(" %[^\n]",caractere);
        scanf("%s",caractere);
    /*for(int i= strlen(caractere)-1; i>=0;i--)
    printf("%c",caractere[i]);*/
    printf("%s",strrev(caractere));
   
}