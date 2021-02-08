//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>

int input()
{
  int X;
  printf("\n Enter a value :");
  scanf("%d",&X);
  return X;
}
  int Compute (int x1,int y1,int x2,int y2)
{
  float distance;
  distance=(float)sqrt((pow((x2-x1),2)+pow((y2-y1),2)));
  printf("%f",distance");
  return distance;
}
 void out (float distance)
{
  printf("%f is the distance between 2 points",distance);
}
 int main()
{
  int p,q,r,s;
  float distance;
  p=input();
  q=input();
  r=input();
  s=input();
  Compute(p,q,r,s);
  Result(distance);
  return 0;
}
