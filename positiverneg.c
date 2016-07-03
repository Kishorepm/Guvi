#include<stdio.h>

void main()
{
int a;
printf("Enter any number : ");
scanf("%d",&a);
if(a==0)
{
printf("The entered number is equal to zero");
}
else if(a>0)
{
printf("%d is a positive number",a);
}
else
{
printf("%d is a negative number ",a);
}
}
