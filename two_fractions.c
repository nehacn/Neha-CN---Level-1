//WAP to find the sum of two fractions.
#include<stdio.h>
typedef struct Fract
{
    int num,deno;
}Fract;
Fract input()
{
    Fract frac;
    printf("\n Enter the numerator = ");
    scanf("%d",&frac.num);
    printf("\n Enter the denominator = ");
    scanf("%d",&frac.deno);
    return frac;
}
int gcd(int p,int q)
{
    while(p!=q)
    {
        if(p>q)
            p=p-q;
        else
            q=q-p;
    }
}
Fract Addition(Fract f1,Fract f2)
{
    Fract Sum;
    int X=gcd(f1.deno,f2.deno);
    Sum.num=((f1.num*f2.deno)+(f2.num*f1.deno))/X,
    Sum.deno=(f1.deno*f2.deno)/X;
    return Sum;
}
void Output(Fract f1,Fract f2,Fract Sum)
{
 printf("\n The addition of (%d/%d) and (%d/%d) is = (%d/%d)",f1.num,f1.deno,f2.num,f2.deno,Sum.num,Sum.deno);
}
int main()
{
    Fract f1,f2,Sum;
    int gcd;
    f1=input();
    f2=input();
    Sum=Addition(f1,f2);
    Output(f1,f2,Sum);
    return 0;
}

