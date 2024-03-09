#include<stdio.h>
int main()
{
    float s,ns,me;
    scanf("%f",&s);

    if(s>=0 && s<=400.00)
    {
        ns=s+(s*0.15);
        me=s*0.15;

        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",me);
        printf("Em percentual: 15 %%\n",ns);
    }


    else if(s>=400.01 && s<=800.00)
    {
        ns=s+(s*0.12);
        me=s*0.12;

        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",me);
        printf("Em percentual: 12 %%\n",ns);
    }

    else if(s>=800.01 && s<=1200.00)
    {
        ns=s+(s*0.10);
        me=s*0.10;

        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",me);
        printf("Em percentual: 10 %%\n",ns);
    }

    else if(s>=1200.01 && s<=2000.00)
    {
        ns=s+(s*0.07);
        me=s*0.07;

        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",me);
        printf("Em percentual: 7 %%\n",ns);
    }

    else if(s>2000.00)
    {
        ns=s+(s*0.04);
        me=s*0.04;

        printf("Novo salario: %.2f\n",ns);
        printf("Reajuste ganho: %.2f\n",me);
        printf("Em percentual: 4 %%\n",ns);
    }

    return 0;
}
