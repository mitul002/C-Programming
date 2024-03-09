#include<stdio.h>

int main()
{
    int count=0,n;
    int a[100];
    printf("How many number do you want to enter: ");
    scanf("%d",&n);
    for (int i=0; i<n ; i++ )
    {
        scanf("%d",&a[i]);
    }
    for (int i=0; i<n-1 ; i++ )
    {
        for (int j=0; j<n-i-1 ; j++ )
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                count++;
            }
        }
    }

    printf("%d\n",count);
    return 0;
}
