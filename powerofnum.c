#include<stdio.h>
void main()
{
int i,pwr,n;
clrscr();
printf("Enter the value : ");
scanf("%d",&n);
pwr=1;
for(i=1;i<=n;)
{
pwr=pwr*n;
i++;
}
printf("%d",pwr);
}
