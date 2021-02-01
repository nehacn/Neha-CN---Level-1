//Write a program to add two user input numbers using one function.
#include<stdio.h>
int sum(int a , int b)
{
     return a+b;
}
    int main()
    {  
       int num1,num2,num3;
       printf("Enter 2 numbers\n");
       scanf("%d%d",&a,&b);
      
        //calling the function
        num3=sum(num1+num2);
        printf("Sum is %d",num3);
        return 0;
     }
