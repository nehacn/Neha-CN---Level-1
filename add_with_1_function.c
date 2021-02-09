//Write a program to add two user input numbers using one function.
#include<stdio.h>
int main()
{
  int x,y,z;
  printf("\n Enter the first Number :");
  scanf("%d",&x);
  printf("\n Enter the second Number :");
  scanf("%d",&y);
  z=x+y;
  printf("\n Sum of %d and %d is %d",x,y,z);
  return 0;
}

