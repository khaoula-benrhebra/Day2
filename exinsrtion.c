#include<stdio.h>
int main()
{
    int j,i,temp;
    int T[] = {8, 3, 7, 5, 6, 9};
    for(i=1;i<6;i++)
    {
        temp=T[i];
        j=i-1;
        while (j>=0 && temp>T[j])
        {
            T[j+1]=T[j];
            j--;
        }
        T[j+1]=temp;
    }  
    for (i = 0; i < 6; i++)
        printf(" %d", T[i]);
}