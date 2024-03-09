#include <stdio.h>

int main()
{
    int num[5];
    int i,sum;
    
    scanf("%d %d %d %d %d",
    &num[0],&num[1],&num[2],&num[3],&num[4]);
    
    for(i=0;i<5;i++)
    {
        sum=sum+num[i];
    }    
    printf("Sum: %d\n",sum);
    
    return 0;
}
    