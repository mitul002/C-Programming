#include<stdio.h>

void sum(int a, int b, int c)
{
    int result=a+b+c;
    printf("sum of numbers: %d\n", result);
}


int main()
{
    sum(7,5,3);
    sum(1,4,7);
    sum(3,6,10);
    sum(11,16,20);
}

