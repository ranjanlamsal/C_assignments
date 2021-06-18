            

#include<stdio.h>

/** 
  * 
  * The factorial function gives factorial of 
  * any integer 
  * 
  * Parameters   : an integer 
  * 
  * Return Value : factorial of integer as integer 
  * 
  */ 
int factorial(float n)
{
    float f;
    f = 1;
    
    while (n >= 1)
    {
        f *= n;
        n -= 1;
    }
    return f; // f = n * (n-1) * (n-2) * .... (n-(n-2)) * (n-(n-1)
}

/** 
  * 
  * int sum_fact_digit()
  * It gives the sum of factorial of numbers
  * 
  * Parameters   : an integer 
  * 
  * Return Value : sum of factorial of digits of number 
  */

int sum_fact_digit(int number)
{
    int rem, num;
    float result ;
    result = 0.0;
    num = number;
    
    for (number = num; number!=0; number /= 10) //number = number/10 in every iteration untill number = 0
    {   
        rem = number % 10; //rem is the digit of given number
        result += factorial(rem); // adding the factorial of every digits
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


