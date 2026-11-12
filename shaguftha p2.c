#include <stdio.h>
 int main()

{
    float length,width;
    float radius;
    float base,height;
    float area,perimeter,circumference;

    /*Rectangle*/
    printf("Enetr length and width of rectangle:");
    scanf("%f %f",&length,&width);

    area=length*width;
    perimeter=2*(length+width);

    printf("Rectangle area=%.2f\n",area);
    printf("Rectangle perimeter=%.2f\n",perimeter);

    /*circle*/
    printf("\n enetr radius of circle:");
    scanf("%f",&radius);

    area=3.14156*radius*radius;
    circumference=2*3.14159*radius;

    printf("circle Area=%.2f\n",area);
    printf("circle circumference=%.2f\n",circumference);

    /*Triangle*/
    printf("\nenetr base and height of triangle:");
    scanf("%f %f",&base,&height);

    area=0.5*base*height;

    printf("Triangle Area=%.2f\n",area);

    return 0;
}
