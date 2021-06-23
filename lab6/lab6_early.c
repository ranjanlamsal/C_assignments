
/** 
  * File:    Ass6_early.c
  * 
  * Author:  Ranjan Lamsal
  * Date:     23 june 2021
  * Partner:  I worked alone  
  * Course:   Computer Engineering 101
  * 
  * Summary of File: 
  * 
  *   This file contains program that takes a decimal number and convert 
  * it to binary
  * 
  */ 

#include<stdio.h>


/** 
  * 
  * The deci_to_binary() function gives the gcd of two numbers
  * 
  * Parameters   : an integera (decimal number) 
  * 
  * Return Value : an integer (a number equal to binary value of decimal number) 
  * 
  */ 
int deci_to_binary(int number)
{
    if (number < 0)
    {
            printf("ENter positive integer");
    } 
    else if (number == 0)
    {
       return 0;
    }
    else
    {
        return(number %2 + 10* deci_to_binary(number/2));
    }
    
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", & number);

    printf("Binary value of %d is : %d",number, deci_to_binary(number));
}
