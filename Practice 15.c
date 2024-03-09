#include<stdio.h>
#include<conio.h>
int main()
{
 char upper;

 printf("Enter a upper case letter :");  // A=65 , a=97. Difference=32
 scanf("%c",&upper);
 printf("The lower case letter is : %c", upper+32);

 getch();

}
