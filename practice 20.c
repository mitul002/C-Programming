#include <stdio.h>
#include <conio.h>

int main ()

{
    int x,y,sum;
    float avg;
    
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    
    sum=x+y;
    
    printf("Addition:%d\n", sum);
    
    avg=(float)sum/2;
    
    printf("Average : %.3f", avg);
    
    getch();


}