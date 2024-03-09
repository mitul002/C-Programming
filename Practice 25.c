#include <stdio.h>
#include <conio.h>

int main ()

{
    float base, height, area;

    printf("Enter Base:");
    scanf("%f",&base);

    printf("Enter Height:");
    scanf("%f",&height);


    area=0.5*base*height;

    printf("Area of Triangle:%.2f",area);


    getch();



}