#include<stdio.h>
int main()
{
    int num, i, rem, sum;
    i = 2;
    sum = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num/2)
    {
        rem = num % i;

        if (rem == 0)
        {
            sum += i;
            i += 1;
        }
        else 
        {
            i += 1;
            continue;
            
        }

        
    }

    if (sum == num)
    {
        printf("%d is a perfect number.",num);
    }

    else
    {
        printf("%d is not a perfect number.", num);
    }

    
}