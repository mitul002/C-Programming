#include<stdio.h>
#include<math.h>

int main()
{
    double A,B,C,TEMP;
    scanf("%lf %lf %lf",&A,&B,&C);

    if(A<B)
    {
        TEMP=A;
        A=B;
        B=TEMP;
    }

    if(A<C)
    {
        TEMP=A;
        A=C;
        C=TEMP;
    }

    if(B<C)
    {
        TEMP=B;
        B=C;
        C=TEMP;
    }

    if(A>=(B+C))
    {
    printf("NAO FORMA TRIANGULO\n");
    }
    if(pow(A,2)==pow(B,2)+pow(C,2))
    {
    printf("TRIANGULO RETANGULO\n");
    }

    if(pow(A,2)>pow(B,2)+pow(C,2))
    {
    printf("TRIANGULO OBTUSANGULO\n");
    }

    if(pow(A,2)<pow(B,2)+pow(C,2))
    {
    printf("TRIANGULO ACUTANGULO\n");
    }

    if(A==B && B==C && C==A)
    {
    printf("TRIANGULO EQUILATERO\n");
    }

    else if ((A==B && B!=C) || (B==C && C!=A) || (C==A && A!=B))
    {
    printf("TRIANGULO ISOSCELES\n");
    }

    return 0;

}





#include <stdio.h>

int main()
{
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a >= (b + c) || b >= (a + c) || c >= (a + b))
        printf("NAO FORMA TRIANGULO\n");
    else if (a * a == (b * b + c * c) || b * b == (a * a + c * c) || c * c == (a * a + b * b))
        printf("TRIANGULO RETANGULO\n");
    else if (a * a > (b * b + c * c) || b * b > (a * a + c * c) || c * c > (a * a + b * b))
        printf("TRIANGULO OBTUSANGULO\n");
    else if (a * a < (b * b + c * c) || b * b < (a * a + c * c) || c * c < (a * a + b * b))
        printf("TRIANGULO ACUTANGULO\n");
    if (a == b && a == c)
        printf("TRIANGULO EQUILATERO\n");
    if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
        printf("TRIANGULO ISOSCELES\n");

    return 0;
}

