#include <stdio.h>

int main()
{
    int a,b,choice;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);

    while (1)
    {
        printf("\n\n1.Addition");
        printf("\n2.subtraction");
        printf("\n3.Multiplication");
        printf("\n4.Division");
        printf("\n5.Remainder");
        printf("\n6.Exit");

        printf("\nenetr your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
           case 1:
               printf("Additon=%d",a+b);
               break;

           case 2:
               printf("Subtrsction=%d",a-b);
               break;

           case 3:
               printf("Multiplication=%d",a*b);
               break;

           case 4:
               if (b!=0)
               printf("division=%d",a/b);
              else
                printf("Cannot divide by zero.");
               break;

           case 5:
               if (b=!0)
               printf("Remainder=%d",a%b);
              else
               printf("cannot find remainder with zero.");
               break;

           case 6:
               printf("program ended.");
               return 0;

           default:
               printf("invalid vchoice.");
         }
    }
    return 0;
}
