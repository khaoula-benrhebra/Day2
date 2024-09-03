#include<stdio.h>
#include<stdlib.h>
int main ()
{
int i,N,T[N],S;
printf("veuillez entrer la taillle de votre tableau : ");
scanf("%d",&N);
printf("veuillez entrer les elements de votre tableau: \n");
for(i=0;i<N;i++)
{
    printf("T[%d]= ",i) ;
    scanf("%d",&T[N]);
}
S=0;
for(i=0;i<N;i++)
    S=S+T[N];
printf("la somme des elements du tableau est : %d",S);
return 0;
}