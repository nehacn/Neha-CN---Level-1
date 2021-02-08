//Write a program to add two user input numbers using one function.
#include<stdio.h>
int input()
{
  int X;
  printf("\n Enter a Number :");
  scanf("%d",&X);
  return X;
}
 int main()
{
  int p,q,c;
  printf("\n Enter a Value for p and q");
  p=input();
  q=input();
  c=p+q;
  printf("\n Sum of %d and %d is %d",p,q,c);
  return 0;
}

