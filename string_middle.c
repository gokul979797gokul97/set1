#include<stdio.h>
int main()
{
 char str[20],len,n;
 scanf("%d", &str);
 len=strlen(str);
 n=len/2;
 len=len-1;
 if(len%2)
 {
  str[n]='*';
  str[n+1]='*';
  }
  else
  {
    str[n]='*';
  }
   printf("%d",str);
   return 0;
   }
