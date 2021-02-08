//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input()
{
  float height;
  printf("\n Enter a Value for height,depth,breadth values respectively");
  scanf("%f",&height);
  return height;
}
 float find_volume(float height,float depth,float breadth)
{
 float volume;
 volume=((height*depth*breadth)+(depth/breadth))/3;
 return volume;
}
 void Result(float height,float depth,float breadth,float volume)
{
 printf("\n Volume of Tromboloid of values %f,%f,%f is %f",height,depth,breadth,volume);
}
 float main()
 {
   float a,b,c,X;
   a=input();
   b=input();
   c=input();
   X=find_volume(a,b,c);
 
Result(a,b,c,X);
return 0;

}
