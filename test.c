#include<stdlib.h>
#include<stdio.h>
int main ()
{
int i,T[6];
for(i=0;i<6;i++)
{
    printf("T[%d]= ",i);
scanf("%d",&T[i]);
}
for(i=0;i<6;i++)
{
    if(i<=3)
    printf("le prd des elements est :%d",T[0]*T[1]*T[2]);
    else
     printf("la somme des elements est :%d",T[3]+T[4]+T[51]);

}

return 0 ;
}