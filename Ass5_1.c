/// To check a strong number

#include<stdio.h>

int factorial(float n)
{
    float f;
    f = 1;
    
    while (n >= 1)
    {
        f *= n;
        n -= 1;
    }
    return f;
}

int sum_fact_digit(int number)
{
    int rem, num;
    float result ;

  /// printf("Enter a number to check if it is an Armstrong number or not: ");
   /// scanf("%d", &num);

    result = 0.0;
    num = number;
    
    ///for (number = num; number != 0; ++place)
   /// {
   ///     number/= 10;
   /// }
    
    for (number = num; number!=0; number /= 10)
    {
        rem = number % 10;
        result += factorial(rem);
    }

    return result;
}

int main()
{
    float num, number;

    printf("Enter a number: ");
    scanf("%f", &number );
    
    num = sum_fact_digit(number);

    if (num == number)
    {
        printf("The number is strong number");

    }
    else{
        printf("the number is not strong number");
    }


}


