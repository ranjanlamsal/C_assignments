///to check if a number is an armstrong number or not

#include<stdio.h>
#include<math.h>
int main()
{
    int num, number, rem, place = 0;
    float result;

    printf("Enter a number to check if it is an Armstrong number or not: ");
    scanf("%d", &num);

    result = 0.0;
    number = num;
    
    for (number = num; number != 0; ++place)
    {
        number/= 10;
    }
    
    for (number = num; number!=0; number /= 10)
    {
        rem = number % 10;
        
        result += pow(rem, place);
    }

    if ((int)result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
}
