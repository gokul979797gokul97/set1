#include<stdio.h>
int main()
{
 int number,count=0,i;
 scanf("%d",&number);
 for(i=2;i<number:i++)
 {
 if(number % i==0)
 {
   count =1;
 }
 }
 if (count==0)
 {
 printf("Yes");
 }
 else
 {
    printf("No");
 }
  return 0;
  }     
