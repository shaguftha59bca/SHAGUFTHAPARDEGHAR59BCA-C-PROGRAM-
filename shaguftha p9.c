#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,original,temp;
    int digit,digits=0;
    int sum=0;
    int i,power;

    printf("enter a positive integer:");
    scanf("%d",&n);

    original=n;
    temp=n;

    /*count number of digits*/
    while(temp>0)
    {
        digits++;
        temp=temp/10;
    }
    temp=n;
    /*calculate armatrong sum*/
    while(temp>0)
    {
        digit=temp%10;
        power=1;
        for (i=1;i<=digits;i++)
        {
            power=power*digit;
        }
        sum=sum+power;
        temp=temp/10;
    }
    printf("number of digits=%d\n",digits);
    printf("sum=%d\n",sum);

    if(sum==original)
        printf("%d ia an armstrong number.\n",original);
     else
        printf("%d is not an armstrong number.\n",original);
     return 0;
}
