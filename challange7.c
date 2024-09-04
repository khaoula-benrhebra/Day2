#include<stdlib.h>
#include<stdio.h>
int A,B;
void saisie()
{
    printf("enter la valeur de A :");
      scanf("%d",&A);
      printf("enter la valeur de B :");
      scanf("%d",&B);
}
int minimum()
  {
      int min ;
  if(A>B)
    return B ;///ou bien min=B;
  else
    return A;///min=A;
    return min;
  }
  int maximum()
  {
      int max;
      if(A<B)
        return B;///ou bien max=B;
      else
        return A;///ou bien max=A;
        return max ;
  }
  int main ()
  {
      int max ,min ;
     saisie();
      min=minimum();
      max=maximum();
      printf("la valeur minimal est : %d \n",min);
      printf("la valeur maxiimal est : %d \n",max);
      return 0;
  }