#include<stdio.h>
int main()
{
  char str1,str2;
  scanf("%s %s",&str1,&str2);
  if(str1 > str2)
  {
    printf("%s",str1);
  }
  else
  {
    printf("%s",str2);
  }
  return 0;
}
