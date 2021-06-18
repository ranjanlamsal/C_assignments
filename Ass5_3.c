#include<stdio.h>
#include<math.h>

/** 
  * 
  * The distance function gives distance between 
  * two coordinate points
  * 
  * Parameters   : 4 floats as coordinate points (x1,y1) and (x2,y2)
  * 
  * Return Value : float value (distance between coordinates inputed)
  * 
  */ 
float distance(float x1, float y1, float x2,float y2)
{
    float x = pow((x2 - x1),2);
    float y = pow((y2 - y1),2);
    float distance = sqrt(x + y);
    return distance;

}


/** 
  * 
  * The area_triangle() function gives area of a triangle
  * 
  * Parameters   : 3 floats as length of sides a, b, and c.
  * 
  * Return Value : float value (area of a triangle formed by a, b, and c)
  * 
  */ 
float area_triangle(float a, float b, float c)
{
    float s = (a + b + c)/2;
    a = sqrt(s * (s-a) * (s-b) * (s-c));
    return a;
}



/** 
  * 
  * The area_rect() function gives area of a rectangle
  * 
  * Parameters   : 5 floats as length of sides a, b, c, d, and e
  * 
  * Return Value : float value (area of a rectangle formed by  sides lenght 
  * a, b, c and d and diagonal length e)
  * 
  */ 
float area_rect(float a, float b, float c, float d, float e)
{
    float a1 = area_triangle(a, d, e);
    float a2 = area_triangle(b, c, e);
    float area_rectangular = a1 + a2;
    return area_rectangular;
}

//code begins here
int main()
{
    char choice;
    printf("Do you want to calculate area "
    "of triangle or rectangle?? (T/R)");
    scanf("%c", &choice);
    
    float x1,x2,x3,x4,y1,y2,y3,y4, area;

    if (choice == 'T' | 't')
    {
        printf("Enter coordinates.....");

        printf("(x1, y1): ");
        scanf("%f" , &x1);
        scanf("%f", &y1);

        printf("(x2, y2): ");
        scanf("%f", &x2);
        scanf("%f", &y2);

        printf("(x3, y3): ");
        scanf("%f", &x3);
        scanf("%f", &y3);

        float a = distance(x1, y1, x2, y2); //to find length a
        printf("a = %f", a);
        float b = distance(x2, y2, x3, y3); // to find length b
        printf("b = %f", b);
        float c = distance(x3, y3, x1, y1); //to find length c
        printf("c = %f", c);

        area = area_triangle(a, b, c);
        printf("area = %f", area);
        printf("The area of triangle with sides (%f,%f), (%f, %f) and (%f, %f) is: %f",x1, y1, x2, y2, x3, y3, area);
    }

    else if (choice == 'R' | 'r')
    {
        printf("Enter coordinates.....");
        printf("(x1, y1): ");
        scanf("%f" , &x1);
        scanf("%f", &y1);

        printf("(x2, y2): ");
        scanf("%f", &x2);
        scanf("%f", &y2);

        printf("(x3, y3): ");
        scanf("%f", &x3);
        scanf("%f", &y3);

        printf("(x4, y4): ");
        scanf("%f", &x4);
        scanf("%f", &y4);

        float a = distance(x1, y1, x2, y2); //to find length a 
        float b = distance(x2, y2, x3, y3); //to find length b
        float c = distance(x3, y3, x4, y4); //to find length c 
        float d = distance(x4, y4, x1, y1); // to  find length d
        float e = distance(x2, y2, x4, y4); //to find diagonal length e

        area = area_rect(a, b, c, d, e);
        printf("The area of rectangle with sides (%f,%f), (%f, %f), (%f, %f) and (%f, %f) is: %f",x1, y1, x2, y2, x3, y3, x4, y4, area);
    }
    else
    {
        printf("Invalid input!!!");
    }
}