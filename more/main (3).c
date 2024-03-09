
// Solution d
#include<stdio.h>
int main()
{
    int i,arr[9];
    
    for(i=0;i<=9;i++)
    {
    scanf("%d",&arr[i]);
    }
    
    for(i=0;i<=9;i++)
    {
        if( 3<=arr[i] && arr[i]<=7)
        {
         printf("%d ",arr[i]);
        }
    }
    
    printf("\n");
    
    //reverse
    for(i=9;i>=0;i--)
    {
        if(arr[i]>=3 && arr[i]<=7)
        {
            printf("%d ",arr[i]);
        }
    }
    
    
    
 return 0 ;
}

