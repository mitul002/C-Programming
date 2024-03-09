#include <stdio.h>

int main()
{
    int num[100];
    int i,n,max;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
    scanf("%d",&num[i]);
    }


    max=num[0];

    for(i=1;i<n;i++)
    {
        if(max>num[i])
        max=num[i];
    }


    printf("Maximum: %d\n",max);
    return 0;
}
