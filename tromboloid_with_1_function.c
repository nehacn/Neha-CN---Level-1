//Write a program to find the volume of a tromboloid using one function 
#include<stdio.h>
int main()
{
   float h,d,b,V;
   printf("Enter height,depth,breadth:");
   scanf("%f%f%f",&h,&d,&b);
   V=((h*d*b)+(d/b))/3;
   printf("Volume of Tromboloid is :%f",V);
   return 0;
}
