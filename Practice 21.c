#include <stdio.h>
#include <conio.h>

int main ()

{
    int x,y,result;
    float avg;
    
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    
    result=x+y;
    printf("Sum:%d\n", result);
    
    result=x-y;
    printf("Sub:%d\n", result);
    
    result=x*y;
    printf("Multiply:%d\n\n", result);
    
    result=x/y;
    printf("Devide:%d\n", result);
    
    result=x%y;
    printf("Reminder:%d\n", result);
    
    getch();


}