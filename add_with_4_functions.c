//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
int input()
{
  int x,y;
  printf("Enter a number\n");
  scanf("%d",&x);
   return x;
}
  int find_sum(int x , int y)
{
   int sum;
   sum=x+y;
   return sum;
} 
  
  void Result(int x ,int y, int z)
 {
    printf("Sum of %d+%d is %d\n",x,y,z);
}
  
  int main()
{
  int a,b,c;
  a=input();
  b=input();
  c=find_sum(a,b);  
  Result(a,b,c);
  return 0;
}
