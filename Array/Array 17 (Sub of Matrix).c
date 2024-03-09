#include <stdio.h>

int main()
{
    int i,j;
    int row,col;
    int A[10][10], B[10][10], S[10][10];


    printf("Input Number of Rows & Columns:");
    scanf("%d %d",&row,&col);



//Input For A Matrix

    printf("\nInput Value for Matrix A\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }

        printf("\n");
    }



//Input For B Matrix

    printf("Input Value for Matrix B\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }

        printf("\n");
    }
    
  
  
    
    
//Output For A Matrix    
    
    printf("A=");
    for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            printf("%d ",A[i][j]);
        }

        printf("\n");
    }
    

//Output For B Matrix

    printf("\nB=");
    for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            printf("%d ",B[i][j]);
        }

        printf("\n");
    }



//Result of A & B Matrix

    printf("\nSUB:");

    for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            S[i][j]=A[i][j]-B[i][j] ;
            
            printf("%d ",S[i][j]);
        }

        printf("\n");
    }


    return 0;
}
