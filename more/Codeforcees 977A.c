#include<stdio.h>
int main()
{
    int i,num,times;
    scanf("%d %d",&num,&times);

    for(int i=0;i<times;i++)
    {
      if(num%10==0)
        num=num/10;

      else
        num=num-1;
    }
    printf("%d",num);
    return 0;
}
