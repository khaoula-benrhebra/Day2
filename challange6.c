#include<stdio.h>
#include<stdlib.h>
int main ()
{
int i,N,F;
printf("veuillez entrer la taillle de votre tableau : ");
scanf("%d",&N);
int T[N];
printf("veuillez entrer les elements de votre tableau: \n");
for(i=0;i<N;i++)
{
    printf("T[%d]= ",i) ;
    scanf("%d",&T[i]);
}
printf("veuillez entrer le facteur :");
scanf("%d",&F);
for (i = 0; i < N; i++) {
        T[i] *= F;
        printf("%d ", T[i]);
    }
    printf("\n");

return 0;
}