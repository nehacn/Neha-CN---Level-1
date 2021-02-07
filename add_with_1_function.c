//Write a program to add two user input numbers using one function.
#include<stdio.h>
int input()
{
   int x;
   printf("Enter a number");
   scanf("%d",&x);
   return x;
}
 int main()
{
 int a,b,c;
 a=input();
 b=input();
 c=a+b;
 printf(" The sum of %d and %d is %d",a,b,c);
 return 0;
}
