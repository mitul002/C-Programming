#include <stdio.h>

int main()
{
    int i,n,num[100];
    
    printf("How many numbers do you want to enter: ");
    scanf("%d",&n);
    
    
    num[0]=0;
    num[1]=1;
    
    for(i=2;i<n;i++)
    {
        num[i]=num[i-1]+num[i-2];
    }
    
     for(i=0;i<n;i++)
    {
        printf("%d",num[i]);
    }

    return 0;
}
