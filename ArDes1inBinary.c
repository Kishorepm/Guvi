#include <stdio.h>

 

void main ()
{
    int number[30];
    int i, j, a, n;
    printf("Enter the value of N\n");
    scanf("%d", &n);
    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)
    scanf("%d", &number[i]);
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] < number[j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("The numbers arranged in descending with number of 1 of its binary\n");
    for (i = 0; i < n; ++i)
    {
        printf("%d", number[i]);
        int orig = number[i];
    int count = 0;
    while(number[i]>0)
    {
        number[i] =number[i] >> 1 << 1;
        if(number[i]-a==1)
            count++;
        number[i] = a >> 1;
        a = number[i];
    }
    printf("%d\n",count);
    }
}