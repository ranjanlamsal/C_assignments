#include<stdio.h>
#include<math.h>
int main()
{
    int num, number, rem, result;
    float cube_root_of_num ;

    printf("Enter a number to check if it is an Dudeney number or not: ");
    scanf("%d", &num);

    number = num;
    result = 0;

    while( num != 0)
    {
        rem = num % 10;
        num /= 10;
        result += rem;
    }

    cube_root_of_num = cbrt(number);
    

    if (cube_root_of_num == result)
    {
        printf("%d is a Dudeney number.", number);
    }

    else
    {
        printf("%d is not a Dudeney number.", number);
    }
}
