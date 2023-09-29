// Q17. Write a C program to check whether a number is palindrome or not.
#include<stdio.h>
int main()
{
    int n,sum=0,r,temp;
    printf("Enter number: ");
    scanf("%d",&n);
    temp = n;
    while (n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;  
    }
    if(temp==sum)
    {
        printf("it is palindrome");
    }
    else
    {
        printf("it is not palindrome");
    }
}