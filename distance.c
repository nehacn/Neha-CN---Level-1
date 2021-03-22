//WAP to find the distance between two point using 4 functions.
#include<stdio.h>
#include<math.h>
int input()
{
    float X;
    scanf("%f",&X);
    return X;
}
float calculate_distance(float x1,float y1,float x2,float y2)
{
    float distance;
    distance=sqrt((y2-y1)*(y2-y1)+(x2-x1)*(x2-x1));
    return distance;
}
float display(float distance)
{
    printf("The distance between point A and B is = %f",distance);
    return distance;
}
int main()
{
    float x1,y1,x2,y2,distance;
    printf("\n Enter the co-ordinates of point A =");
    printf("\n Enter the value of x1 :");
    x1=input();
    printf("\n Enter the value of y1 :");
    y1=input();
    printf("\n Enter the co-ordinates of point B =");
    printf("\n Enter the value of x2 :");
    x2=input();
    printf("\n Enter the value of y2 :");
    y2=input();
    distance=calculate_distance(x1,y1,x2,y2);
    display(distance);
    return 0;
}
