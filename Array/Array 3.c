#include <stdio.h>

int main()
{
    int num[5]={10,20,30,40,50};
    int i,sum;
    
    for(i=0;i<5;i++)
    {
        sum=sum+num[i];
    }    
    printf("Sum: %d\n",sum);
    printf("Average: %.2f\n",(float)sum/5);
    
    
    return 0;
}
    