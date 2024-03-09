#include<stdio.h>

int main()
{
    int count=0,n,temp;
    int a[100];
    printf("Enter the number you want to take input: ");
    scanf("%d",&n);
    for (int i=0; i<n ; i++ )
    {
        scanf("%d",&a[i]);
        if(a[i]>50)
        {
            count++;
        }
    }

    for (int i=0; i<n-1 ; i++ )
    {
        for (int j=i+1; j<n ; j++ )
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for (int i=0; i<n ; i++ )
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("%d\n",count);
    return 0;
}
