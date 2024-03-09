
#include<stdio.h>
#include<conio.h>


int main()

{   float num, num2, num3;

    printf("Enter 3 number:");
    scanf("%f",&num);
    scanf("%f",&num2);
    scanf("%f",&num3);


    if(num>0)
    printf("The number 1 is positive\n");

    else if (num<0)
    printf("The number 1 is negative\n");

    else if (num==0)
    printf("The number 1 is non-negative(0)\n");


    if(num2>0)
    printf("The number 2 is positive\n");

    else if (num2<0)
    printf("The number 2 is negative\n");

    else if (num2==0)
    printf("The number 2 is non-negative(0)\n");


    if(num3>0)
    printf("The number 3 is positive\n");

    else if (num3<0)
    printf("The number 3 is negative\n");

    else if (num3==0)
    printf("The number 3 is non-negative(0)\n");


    getch();

}
