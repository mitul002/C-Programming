#include<stdio.h>

int sum(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}


int main()
{
    int result = sum(7,5);
    printf("Sum = %d\n", result);

    result = sub(7,5);
    printf("Sub = %d\n", result);
}
