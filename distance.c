//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>

int input()
{
  int X;
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
{ printf("%f is the distance",Distance);
}
 int main( )
 { 
	int a,b,c,d;
    float Distance;
    printf("Enter point x1:");
    a=input();
    printf("Enter point y1:");
    b=input();
    printf("Enter point x2:");
    c=input();
    printf("Enter point y2:");
    d=input();
    compute(a,b,c,d);
    out(Distance);
    return 0;
 }
