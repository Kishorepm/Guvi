#include<stdio.h>
void main()
{
int i,sum=0,n;
printf("Enter the range : ");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=i+sum;
}
printf("%d",sum);
}
