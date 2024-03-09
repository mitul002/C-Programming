#include <stdio.h>
#include <conio.h>

int main ()

{
    float base, height, area;
    
    printf("Enter Base:");
    scanf("%f",&base);
    
    printf("Enter Height:");
    scanf("%f",&height);
    
    
    area=(float)1/2*base*height;
    
    printf("Area is : %.2f", area);
    
    
    getch();
    


}