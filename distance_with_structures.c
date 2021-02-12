//WAP to find the distance between two points using structures and 4 functions.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float distance;
struct points
{
  float x_cor, y_cor;
};
typedef struct points P;
P a,b;
void input()
{
  printf("\n Enter the distance from x and y coordinates of point A");
  printf("\n Enter the x1:");
  scanf("%f",&a.x_cor);
  printf("\n Enter the y1:");
  scanf("%f",&a.y_cor);
  
  printf("\n Enter the distance from x and y coordinates of point B");
  printf("\n Enter the x2:");
  scanf("%f", &b.x_cor);
  printf("\n Enter the y2:");
  scanf("%f",&b.y_cor);
}
 float compute()
{
  float distance;
  distance=sqrt((pow((b.x_cor-a.x_cor),2)+pow((b.y_cor-a.y_cor),2)));
  return distance;
}
  void output(float distance)
{
  printf("\n The difference btw two point A and B is : %f",distance);

}
  int main()
{
  input();
  float out=compute();
  output(out);
  return 0 ;
}
