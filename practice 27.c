#include <stdio.h>
#include <conio.h>

int main ()

{
    
    float length,width,area;
    
    printf("Enter Length:");
    scanf("%f",&length);
    
    printf("Enter Width:");
    scanf("%f",&width);
    
    area=length*width;
    
    printf("Area of rectangle: %.2f",area);
    getch();

}