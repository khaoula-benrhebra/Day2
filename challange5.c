#include<stdio.h>
#include<stdlib.h>
int main ()
{
int i,N,S,min;
printf("veuillez entrer la taillle de votre tableau : ");
scanf("%d",&N);
int T[N];
printf("veuillez entrer les elements de votre tableau: \n");
for(i=0;i<N;i++)
{
    printf("T[%d]= ",i) ;
    scanf("%d",&T[i]);
}
min=T[0];
for(i=1;i<N;i++)
{
    if (min > T[i])
    min=T[i];
}
printf("l element minimale de ce tab est : %d",min);
return 0;
}