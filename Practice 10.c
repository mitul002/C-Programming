#include<stdio.h>
#include<conio.h>

int main()
{
    int     a;
    float   b;
    double  c;
    char    d;

    printf("size of int   = %d bytes \n", sizeof(a));
    printf("size of float = %d bytes \n", sizeof(b));
    printf("size of double= %d bytes \n", sizeof(c));
    printf("size of char  = %d byte  \n", sizeof(d));

    getch();
}
