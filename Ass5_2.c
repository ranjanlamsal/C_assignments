#include <stdio.h>



/** 
  * 
  * The gcd function gives highest common factor of 
  * any two integers 
  * 
  * Parameters   : 2 integer 
  * 
  * Return Value : gcd of two integers
  * 
  */ 
int gcd(int num1, int num2)
{
    int result, rem, n;

    if (num1 > num2)
    {
        num1, num2 = num2, num1; // exchanging the position of numbers as to keep largest number as num2
    }

    for ( n = num1; n>0; n--) //iterating and decreasing the value of n
    {
        if ( num1 % n == 0 && num2 % n == 0)  
        {
            result = n;
            return result;
        }
    }
    
}

int main()
{
    int num1, num2, hcf;
    
    printf("Enter number 1:");
    scanf("%d", &num1);
    printf("Enter number 2:");
    scanf("%d", &num2);
    
    hcf = gcd(num1, num2);
    printf("The gcd of %d and %d is %d", num1, num2, hcf);


}