#include<stdio.h>
#include<conio.h>

int main()
{
    int num[5];
    int i, j, temp;

    printf("Enter Numbers:");
    scanf("%d %d %d %d %d",&num[0],&num[1],&num[2],&num[3],&num[4]);


    for (i=0;i<4 ;i++)  //This loop is for iteration
    {
        for(j=0; j<4;j++)  //This loop is for performing sorting
        {
            if(num[j]>num[j+1])
            {
            temp=num[j];
            num[j]=num[j+1];
            num[j+1]=temp;

            }
        }
    }


    printf("After sorting: ");
    for(i=0;i<5;i++)
    {
        printf("%d  ", num[i]);
    }

    return 0;
}
