#include<stdio.h>
#include<stdlib.h>
int main ()
{
int i,N,P,F,j;
printf("veuillez entrer la taillle de votre tableau : ");
scanf("%d",&N);
int T[N];
printf("veuillez entrer les elements de votre tableau: \n");
for(i=0;i<N;i++)
{
    printf("T[%d]= ",i) ;
    scanf("%d",&T[N]);
}
printf("veuillez entrer le facteur :");
scanf("%d",F);
P=1;
for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
{
        T[j]=P+(T[i] * F); 
         printf("T[%d]=%d \n",j,T[j]);
}
        }
 printf("la somme des elements du tableau est : %d",P);
return 0;
}