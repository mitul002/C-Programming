#include<stdio.h>


int main()
{
int num,i,fact;
printf("Enter any positive number:");
scanf("%d",&num);
for(i=2; i<num; i++)

{
fact=num%i;
printf("%d mod %d = %d\n",num,i,fact);


if(fact==0)
{
printf("not Prime\n");
break;
}
else
{
printf("Prime\n");
break;
}
}

 return 0;

}
