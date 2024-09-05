#include<stdio.h>
int main()
{
    int i,j, T[5]={1,3,4,4,6};
   
   for(i=0;i<5;i++)
    {
       for (j = i+1;j<5; j++)
         {
           ///debut: 
            if(T[i]==T[j])
            continue;
           
            
    
         }
          printf("T[%d]=%d \n",j,T[i]);
         
    }
   
}