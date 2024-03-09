#include <stdio.h>

int main()
{
   int num1,num2,i,count=0;
   
   printf("Enter 2 numbers:");
   scanf("%d %d",&num1,&num2);
   
   for(i=num1; i<=num2; i++)
   {
       if(i%4==0)
       {
           count++;
       }
   }
   
   printf("%d",count);
   return 0;
}

