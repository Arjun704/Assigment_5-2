// Q22 .Write a C program to find all factors of a number.
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter number:- ");
    scanf("%d",&n);
    printf("facter ");
    while (n>=i)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
        i++;
    }
    
}