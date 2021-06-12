//Converting Decimal number to binary


#include<stdio.h>
int main()
{
int decimal_num, original_decimal, rem, place;
long binary_num;

printf("Enter a decimal number: ");
scanf("%d", & decimal_num);

original_decimal = decimal_num;
binary_num = 0;
place = 1;

while (decimal_num != 0)
{
    rem = decimal_num % 2;
    decimal_num = decimal_num /2;
    binary_num = binary_num + rem*place;
    place *= 10;
}

printf("Binary value for %d is %ld",original_decimal, binary_num);


}
