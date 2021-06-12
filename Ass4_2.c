//Creating fibonacci sequence

#include<stdio.h>
int main()
{
    int i, t1, t2, num, number, next_number, term;

    printf("How long sequence you wanna create? Enter num of terms: ");
    scanf("%d", & term);

    t1 = 0;
    t2 = 1;
    i = 2;
    if (term == 1)
    {
        printf("The fibonacci sequence upto %dst term is: 0", term);
    }
    else if (term == 2)
        {
            printf("The fibonacci sequence upto %dnd term is: 0, 1", term);
        }
    else if (term >=3)
    {
        
        printf("The fibonacci sequence upto %dth term is: 0, 1", term);
    }
    
    

    while (term > i)
    {
        next_number = t1+ t2;
        printf(", %d",next_number);
        t1 = t2;
        t2 = next_number;
        i +=1;
    }
    

}
