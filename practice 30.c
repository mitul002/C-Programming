#include<stdio.h>
#include<conio.h>
main()

{

    float c,f;
    printf("Enter Fahrenheit Temperature: ");
    scanf("%f",&f);

    c=(f-32)/1.8;

    printf("Celsius Temperature: %.3f",c);

    getch();


}
