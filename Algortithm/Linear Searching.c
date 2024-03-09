#include <stdio.h>

int main()
{
    int i,n,num[100];
    int value,pos;

    printf("How many numbers do you want to enter: ");
    scanf("%d",&n);


    printf("Enter numbers: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }


    printf("Enter The value you want to find : ");
    scanf("%d",&value);



    for(i=0;i<n;i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }

    if(value!=num[i])
    printf("Invalid Number");

    else
    printf("Position: %d",pos);

    return 0;
}
