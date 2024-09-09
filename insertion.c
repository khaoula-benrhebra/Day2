#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,temp;
    int T[]={8,3,7,5,6,9};
for ( i = 1; i <6; i++)
{
    temp=T[i];
   for ( j = i; j>=0; j--)
   {
    T[j]=T[j-1];
    if(T[j-1]<temp)
    break;  ///if(T[i]<T[j]) ///if(T[i]>T[j])
   
   }
   T[j]=temp;
}
for ( i = 0; i <6; i++)
printf(" %d",T[i]);
}