#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,temp;
    int T[]={1,3,23,6,8,9};
for ( i = 0; i <6; i++)
{
   for ( j = i+1; j < 6; j++)
   {
    if(T[i]>T[j])  ///if(T[i]<T[j]) ///if(T[i]>T[j])
   {  temp=T[i];
   T[i]=T[j];
   T[j]=temp; }
   }
   
}
for ( i = 0; i <6; i++)
printf(" %d",T[i]);
}