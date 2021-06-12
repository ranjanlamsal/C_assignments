//Finding factorial of a number

#include<stdio.h>
int main()
{
    int number,num, factorial;
    factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    number = num;
    while (num > 1)
    {
        factorial *= num;
        num -= 1;
    }
    
    printf("The factorial of %d is %d", number, factorial);


}
