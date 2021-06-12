///To check if a number is prime or not

#include <stdio.h>


int main ()
{

    int number;
    start_again:
    printf("Enter a number \t");
    scanf("%d",&number);

	// printf("NUM = %d \n", number);
    int i = 2;
    int remainder;
    char prime_yn;
	do
	{
		if (number==2)
		{
			printf("It is a prime number.\n");
		}
		else
		{
			remainder = number%i;

			// printf("rem = %d \n", remainder);
			i += 1;

			
			if(remainder == 0)
			{
				prime_yn = 'n';
				break;
			}
			else
			{
				prime_yn = 'y';
			}

		}
	
    }
	while (i <= number/2 && remainder != 0);

        
	switch (prime_yn)
		{
			case 'y':
			printf("It is a prime number.\n");
			break;
			case 'n':
			printf("It is not a prime number\n");
			break;
		}

	char cont;
    printf("Do you wish to continue?(Y/N)\n" );
    scanf("%c", &cont);

    switch (cont)
		{
			case 'Y':
			goto start_again;

			case 'N':
			break;
		}
}
