#include <stdio.h>

int main()
{
    int i,j;
    int ar[3][4];
    
    for(i=0;i<3;i++)
    {
        
         for(j=0;j<4;j++)
        {
            printf("ar[%d][%d]=",i,j);
            scanf("%d",&ar[i][j]);
        }
        printf("\n");
        
    }
    
    
    
    
    for(i=0;i<3;i++)
    {
        
         for(j=0;j<4;j++)
        {
            printf("%d ",ar[i][j]);
        }
        
        printf("\n");
    }
    
                 

    return 0;
}
