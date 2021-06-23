/** 
  * File:    Ass6.c
  * 
  * Author:  Ranjan Lamsal
  * Date:     23 june 2021
  * Partner:  I worked alone  
  * Course:   Computer Engineering 101
  * 
  * Summary of File: 
  * 
  *   This file contains program that gives the nth term of fibonacci 
  * sequence
  * 
  * 
  */ 

#include<stdio.h>
int fibonacci(int);

int main()
{
    int number;
    int result;

    printf("Enter the nth number in fibonacci sequence");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Invalid number!! Input positive integer.");
    }
    else
    {
        result = fibonacci(number);
        printf("The %dth term of fibonacci number is %d", number, result);

    }
    return 0;

}


/** 
  * 
  * The fibonacci() function gives the nth term of fibonacci sequence
  * 
  * Parameters   : an integer (value for n) 
  * 
  * Return Value : an integer (nth fibonacci number) 
  * 
  */ 
int fibonacci(int number)
{
    if (number == 1)
    {
        return 0;  //setting first term to 0
    }
    else if (number == 2)
    {
        return 1; //setting 2nd term to 1
    }
    else
    {
        return(fibonacci(number-1)+fibonacci(number-2));
    }
    
}