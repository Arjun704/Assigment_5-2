// Write a C program to find LCM of two numbers
#include<stdio.h>
int main()
{
    int n1,n2,lcm=0,gcd,i;
    printf("Enter tow number: ");
    scanf("%d%d",&n1,&n2);
    for(i=1;i<n1 && i<n2;i++)
   {  if(n1%i==0 && n2%i==0)
             gcd=i  ;
   }
   lcm=(n1*n2)/gcd;
   printf("LCM => %d ",lcm);
}