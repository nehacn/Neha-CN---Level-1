//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input()
{
  float height;
  printf("\n Enter a value of height,depth,breadth ");
  scanf("%f",&height);
  return height;
}
  float find_volume(float height,float depth , float breadth)
{
  float volume;
  volume=((height*depth*breadth)+(depth/breadth))/3;
  return volume;
}
 void output(float height,float depth,float breadth,float volume)
{
  printf(" Volume of the Tromboloid with values %f,%f,%f is %f",height,depth,breadth,volume);
}
   float main()
{
  float a,b,c,x;
  a=input();
  b=input();
  c=input();
  x=find_volume(a,b,c);

 output(a,b,c,x);
 return 0;
}

