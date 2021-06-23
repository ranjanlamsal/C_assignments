
/** 
  * File:    Ass6_1.c
  * 
  * Author:  Ranjan Lamsal
  * Date:     23 june 2021
  * Partner:  I worked alone  
  * Course:   Computer Engineering 101
  * 
  * Summary of File: 
  * 
  *   This file contains program that takes two numbers as input and
  *   gives the highest common factor of those two numbers
  * 
  * 
  */ 


#include <stdio.h>

int gcd(int num1, int num2);

int main()
{
    int n1, n2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    printf("G.C.D of %d and %d is %d.", n1, n2, gcd(n1, n2));
    return 0;
}


/** 
  * 
  * The gcd() function gives the gcd of two numbers
  * 
  * Parameters   : two integers (num1 and num2) 
  * 
  * Return Value : an integer (gcd of num1 and num2) 
  * 
  */ 
int gcd(int num1, int num2)
{
    if (num2 != 0)
        return gcd(num2, num1 % num2);
    else
        return num1;
}