#include<stdio.h>
int main()
{
  int n; 
  scanf("%d",&n);
  int a[n],i,temp,j,median;
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(a[i] > a[j])
      {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
   }
 median=(n+1)/2;
printf("%d",a[median]);
  return 0;
  }
   
