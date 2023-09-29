// Q23. Write a C program to calculate factorial of a number.
#include<stdio.h>
int main()
{
   int n,f=1,i=1;
   printf("Enter number => ");
   scanf("%d",&n);
   printf("factorial of %d is ",n);
  while(i<=n){

        f=f*i;

        i++;

    } 
   printf("%d",f);
   return 0;
}