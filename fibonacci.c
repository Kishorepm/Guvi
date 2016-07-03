#include<stdio.h>
void main()
{
int a=0,b=1,c,d,i;
printf("%d\n%d",a,b);
for(i=1;i<10;i++)
{
a=a+b;
b=a+b;
printf("%d",a);
}
printf("\nThe series is done");
}
