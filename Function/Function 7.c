#include<stdio.h>

float square(float a)
{
 return a*a;
}


int main()
{
 float num, result;
 printf("Enter a number:");
 scanf("%f",&num);
 result=square(num);
 printf("Result: %f",result);


}