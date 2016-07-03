#include<stdio.h>
void main()
{
int i,n1,n2,n3;
printf("Enter 3 numbers : ");
scanf("%d%d%d",&n1,&n2,&n3);
 if(n1<n3 || n2<n3)
 {
  if(n1<n3)
  {
  printf("%d is greatest",n3);
  }
   else
   {
   printf("%d is greatest",n3);
   }
  }
   else if(n1>n3 || n2>n3)
   {
    if(n1>n3)
    {
    printf("%d is greatest",n1);
    }
     else
     {
     printf("%d is greatest",n2);
     }
    }
    else
    {
     if(n1>n2)
     {
     printf("%d is greatest",n1);
     }
     else
     {
     printf("%d is greatest",n2);
     }
    }
    }
