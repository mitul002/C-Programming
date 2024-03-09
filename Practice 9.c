#include<stdio.h>
#include<conio.h>

int main()
{
    int num1;
    float num2;
    
    printf("Enter an integer and a float number:");
    scanf("%d %f", &num1 ,&num2);
    printf("You have entered %d, %2.5f",num1,num2);
    getch();

}