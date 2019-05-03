#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int array[n],i,min;
  for(i=0;i<n;i++)
  {
  	scanf("%d",&array[i]);
  }
  min=array[0];
  for(i=0;i<n;i++)
  {
    if(largest > array[i])
    {
      min=array[i];
    }
  }
  printf("%d",min);
  return 0;
}
