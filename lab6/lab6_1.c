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

int gcd(int num1, int num2)
{
    if (num2 != 0)
        return gcd(num2, num1 % num2);
    else
        return num1;
}