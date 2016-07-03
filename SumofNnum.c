#include<stdio.h>
void main()
{
int i,sum=0,n;
printf("Enter the value for which u need the sum : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=i+sum;
}
printf("%d",sum);
}
