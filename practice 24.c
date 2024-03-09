#include <stdio.h>
#include <conio.h>

int main ()
    {
    
    int num1,num2,num3,sum;
    float avg;
    
    printf("Enter three number: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    
    sum=num1+num2+num3;
    
    printf("Sum: %d\n", sum);
    
    
    
    avg=(float)sum/3;
    
    printf("Average: %f",avg);
    
    getch();
    
    }