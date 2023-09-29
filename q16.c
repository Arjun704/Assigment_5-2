// Q16. Write a C program to enter a number and print its reverse.
#include<stdio.h>
int main()
{
    int n,r;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        printf("%d",r);
        n=n/10;
    }
    return 0;

}