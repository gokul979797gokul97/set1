#include<stdio.h>
int main()
{
 int n,k,i.count=0;
 scanf("%d %d",&n,&k);
 int arr[n];
 for(i=0;i<=n;i++)
 {
    scanf("%d",arr[i]);
 }
    for(i=0;i<n;i++)
  {
   if(arr[i]==k)
   {
   count++;
     }
     }
     if(count)
  {
      printf("yes");
  }
  return 0;
  }
