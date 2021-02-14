//WAP to find the sum of n fractions.
#include<stdio.h>
int sizeinput(int n)
{
  printf("\n Enter no of fractions to be added =");
  scanf("%d",&n);
  return n;
}
 struct fraction
{
  int numerator,denominator ;
};
typedef struct fraction Fract;
Fract numerator(int n, Fract f1[n])
{
   Fract res;
   res.numerator=f1[0].numerator;
   res.denominator=f1[0].denominator;
   int i;
   for(i=1;i<n;i++)
   {
      res.numerator=(res.numerator*f1[i].denominator)+(f1[i].numerator*res.denominator);
      res.denominator=(res.denominator*f1[i].denominator);
    }
  return res;
}
int fractinput(int n,Fract f1[n])
{
   int i;
   printf("\n Enter fractions=");
   for(i=0;i<n;i++)
   {
      scanf("%d/ %d",&f1[i].numerator,&f1[i].denominator);
      if(i<n-1)
      {
         printf("+");
      }
     }
       printf("=");
      return f1;
}
Fract gcd(Fract res)
{
   int flag=1,i;
   for(i=2;i<=res.numerator && i<=res.denominator; i++)
    {
      if(res.numerator%i==0 && res.denominator%i==0)
      {
         flag=i;
      }
}
res.numerator=res.numerator/ flag;
res.denominator=res.denominator/ flag;
return res;
}
out(Fract res)
{
   printf("\n The total sum of fractions = %d/%d",res.numerator,res.denominator);
}
int main()
{
  int n;
  n=sizeinput(n);
  Fract f1[n],res;
  fractinput(n,f1);
  res=numerator(n,f1);
  res=gcd(res);
  out(res);
  return 0;
 }
