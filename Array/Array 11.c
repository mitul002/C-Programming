#include <stdio.h>

int main()
{
    int ar1[100];
    int ar2[100];
    int i,n,sum;
    
    printf("How many numbers do you want scan: ");
    scanf("%d",&n);
    
    printf("Enter Array 1 numbers:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&ar1[i]);
    }
    
    for(i=0;i<n;i++)
    {
        ar2[i]=ar1[i];
    }    
    
    printf("Array 2: \n");
    
    for(i=0;i<n;i++)
    {
        printf("%d\n",ar2[i]);;
    }    
    
    return 0;
}
    