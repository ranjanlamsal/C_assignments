#include<stdio.h>
int main ()
{
    int marks;
    char grade;
    pritnf("Enter your marks (out of 100): ");
    scanf("%d",&marks);

    if (marks >= 0 | marks <= 100)
        {
        if (marks>=80 | marks<=100)
           { grade = "A";}
        else if (marks>= 75 | marks<80)
            {
                grade= "A-";
            }
        else if (marks>= 70 | marks<75)
            {
                grade= "B+";
            }
        else if (marks>= 65 | marks<70)
            {
                grade= "B";
            }
        else if (marks>= 60 | marks<65)
            {
                grade= "B-";
            }
        else if (marks>= 55 | marks<60)
            {
                grade= "C+";
            }
        else if (marks>= 50 | marks<55)
            {
                grade= "C";
            }    
        else if (marks>= 45 | marks<50)
            {
                grade= "C-";
            }
        else if (marks>= 40 | marks<45)
            {
                grade= "D";
            }
        else if (marks<40)
            {
                printf("fail");
            }

        }
    else
        printf("Invalid marks!!!");

    printf("Your grade is : %c", grade);
}