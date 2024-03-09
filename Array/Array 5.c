#include <stdio.h>

int main()
{
    int num[6];
    int i,sum;

    printf("Enter 5 numbers:");
    for(i=0;i<6;i++)
    {
    scanf("%d",&num[i]);
    }

    for(i=0;i<6;i++)
    {
        sum=sum+num[i];
    }
    printf("Sum: %d\n",sum);

    return 0;
}
