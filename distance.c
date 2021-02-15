//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
int input1()
{
  int X;
  printf("\n Enter the co-ordinates of point A = ");
  printf("\n Enter point x1:");
  scanf("%d",&X);
  return X;
}
int input2()
{
  int X;
  printf("\nEnter point y1:");
  scanf("%d",&X);
  return X;
}
int input3()
{
  int X;
  printf("\n Enter the co-ordinates of point B = ");
  printf("\n Enter point x2 :");
  scanf("%d",&X);
  return X;
}
int input4()
{
  int X;
  printf("\nEnter point y2:");
  scanf("%d",&X);
  return X;
}
  int compute( int x1,int y1, int x2 , int y2)
{
  float Distance;
  Distance=(float)sqrt((pow((x2-x1),2)+pow((y2-y1),2)));
  printf("%f",Distance);
  return Distance;
}
void out( float Distance)
{ printf("%f is the distance between points A and B ",Distance);
}
 int main( )
 {
int a,b,c,d;
    float Distance;
    a=input1();
    b=input2();
    c=input3();
    d=input4();
    compute(a,b,c,d);
    out(Distance);
    return 0;
 }

