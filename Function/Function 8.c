#include<stdio.h>

float square(float a,float b)
{
 return 0.5*a*b;
}

int main()
{
 float height,base,result;
 printf("Enter the base & height:");
 scanf("%f %f",&base, &height);

 result=square(base,height);

 printf("Result: %f",result);

}