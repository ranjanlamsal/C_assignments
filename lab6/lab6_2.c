/** 
  * File:    Ass6_2.c
  * 
  * Author:  Ranjan Lamsal
  * Date:     23 june 2021
  * Partner:  I worked alone  
  * Course:   Computer Engineering 101
  * 
  * Summary of File: 
  * 
  *   This file contains program that prints numbers from 1 to 100 using recursion method
  * 
  */ 

#include <stdio.h>


/** 
  * 
  * The printNumbers() function prints numbers from 1 to 100
  * 
  * Parameters   : no parameter
  * 
  * Return Value : 100 integers (numbers from 1 to 100)
  * 
  */ 
void printNumbers(int num)
{
    if (num==100)
    {
        printf("%d ",num);
    }

    else
    {
        printf("%d ",num);
        printNumbers(num+1);
    }
    
}

int main()
{
    int num= 1;
    printNumbers(num);
    printf("\n");
}