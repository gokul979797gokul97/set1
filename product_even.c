#include<stdio.h>
int main()
{
  int n, m, product;
   scanf("%D %d",&n,&m);
   product=n*m;
   if(product % 2==0)
   {
     printf("Even");
     }
     else
     {
     printf("Odd");
     }
     return 0;
     }
