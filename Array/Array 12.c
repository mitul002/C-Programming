#include <stdio.h>

int main()
{
    int i,j;
    int ar[3][4]={
                    {12,35,56,44},
                    {62,33,76,20},
                    {96,12,69,25},
                 };

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
