//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
int input()
{
  int X;
  printf("\n Enter the number of elements  =");
  scanf("%d",&X);
  return X;
}
 void input_arr(int X , int a[X])
{
  printf("\n Enter the elements = ");
  for (int i=0;i<X;i++)
   {
      scanf("%d",&a[i]);
   }
}
int add(int X, int a[ ])
{
  int sum=0;
  for(int i=0;i<X;i++)
  {
     sum=sum+a[i];
  }
  return sum;
}
 void Display(int X , int sum)
{
  printf("\n Sum of %d different numbers is = %d",X,sum);
}
int main()
{
  int X,sum;
  X=input();
  int a[X];
  input_arr(X,a);
  sum=add(X,a);
  Display(X,sum);
  return 0;
}
