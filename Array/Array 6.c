#include <stdio.h>

int main()
{
    int num[100];
    int i,n,sum;
    
    printf("How many numbers (max:100) do you want scan: ");
    scanf("%d",&n);
    
    printf("Enter numbers:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&num[i]);
    }
    
    for(i=0;i<n;i++)
    {
        sum=sum+num[i];
    }    
    printf("Sum: %d\n",sum);
    
    return 0;
}
    