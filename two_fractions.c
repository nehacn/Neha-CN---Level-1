//WAP to find the sum of two fractions.
#include<stdio.h>
int num(int,int,int,int);
int deno(int,int);
void sim1(int,int,int,int);
int main()
{
  struct fr
{
  int n,d;
 } f1,f2,res;
   
   printf("\n Enter two numerators - ");
   scanf("%d%d",&f1.n,&f2.d);
   printf("\n Enter two denominators - ");
   scanf("%d%d",&f1.d,&f2.d);
   num(f1.n,f2.n,f1.d,f2.d);
   deno(f1.d,f2.d);
   sim1(f1.n,f2.n,f1.d,f2.d);
   return 0;
}
  int num( int x1, int x2, int y1, int y2)
{
   int res1;
   res1=(x1*y2) + (x2*y1);
   printf("\n %d is the total sum value of the numerators",res1);
   return res1;
}
  int deno( int y2,int y1)
{
  int res2;
  res2=y2*y1;
  printf("\n %d is the total sum value of the denominators",res2);
  return res2;
}
 void sim1(int x1,int x2,int y1,int y2)
{
  int i,flag=1,res1,res2;
  res1=(x1*y2)+(x2*y1);
  res2=y1*y2;

for(i=2;i<=res1 && i<=res2; i++)
{
   if(res1%i==0 && res2%i==0)
   {
      flag=i;
   }
}
  res1=res1/flag;
  res2=res2/flag;
  printf("\n The simplified version of the fraction is %d/%d",res1,res2);
}
