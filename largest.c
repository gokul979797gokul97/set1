#include<stdio.h>
int main()
{
int num1,num2,num3;
printf("enter three numbers\n");
scanf("%d %d",&num1, &num2,&num3);
if((num1>num2)&&(num1>num3))
{
printf("%" , num1);
}
else if ((num2>num1)&& (num2>num3))
{
printf("%", num2);
}
else
{
printf("%d",num3);
}
return 0;
}
