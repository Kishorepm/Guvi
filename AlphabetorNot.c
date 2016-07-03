#include<stdio.h>
void main()
{
char c;
printf("Enter a alpha or numeric number");
scanf("%c",&c);
if(c>=65 && c<=122)
{
 if(c>=96 && c<=122)
 {
 printf("The Enter value is a lower case alphabet",c);
 }
  else
  {
  printf("The entered value is a upper case alphabet",c);
  }
 }
 else
 {
 printf("The entered value is not a alphabet",c);
 }
 }
