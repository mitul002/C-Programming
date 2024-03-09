#include<stdio.h>
#include<conio.h>
#define pi 3.1416
main()

{

float radius,area;

printf("Enter radius: ");
scanf("%f",& radius);

area=pi*radius*radius;

printf("result: %.15f",area);
getch();


}

