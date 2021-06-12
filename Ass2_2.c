#include<stdio.h>
int main()
{
    float monthly_salary,annual_income, annual_bonus, annual_life_ins, taxable_income, tax;

    
    printf("Enter your monthly salary: ");
    scanf("%f", & monthly_salary);
    printf("Enter your annual bonus: ");
    scanf("%f", & annual_bonus);
    printf("Enter your annual life insurance premium: ");
    scanf("%f", & annual_life_ins);
    annual_income = monthly_salary*12 + annual_bonus;

    taxable_income = monthly_salary*12 + annual_bonus - annual_life_ins;

    if (taxable_income >= 0 )
    {
        if (taxable_income <= 400000)
        {
            tax = taxable_income/100;
        }

        if (taxable_income > 400000 && taxable_income <= 500000)
        {
            tax = 4000 + (taxable_income - 400000)*0.1;
        }

        if (taxable_income > 500000 && taxable_income <= 700000)
        {
            tax = 4000 + 10000+ (taxable_income - 500000)*0.2;
        }

        if (taxable_income > 700000 && taxable_income <= 2000000)
        {
            tax = 4000 + 10000+ + 40000+ (taxable_income - 700000)*0.3;
        }

        if (taxable_income > 2000000 )
        {
            tax = 4000 + 10000+ + 40000 + 390000+ (taxable_income - 2000000)*0.36;
        }
    }

    else
    {
        printf("Invalid input!!!");
    }

    printf(" Your Annual income is: %f \n Your taxable income is: %f \n Total payable tax is: %f \n", annual_income, taxable_income, tax);







}