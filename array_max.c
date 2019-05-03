#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n],i,largest;
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  largest=a[0];
  for(i=0;i<n;i++)
  {
    if(largest < a[i])
    {
      largest=a[i];
    }
  }
  printf("%d",largest);
  return 0;
}
