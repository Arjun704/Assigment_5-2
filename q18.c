//  Write a C program to find frequency of each digit in a given integer.
#include<stdio.h>
int main()
{
    int n,d,count=0;
    printf("Enter the number and frequency: ");
    scanf("%d %d",&n,&d);
    while(n)
    {
        if(n%10==d)
           {
            count++;
           }
        n=n/10;           
    }
    printf("frequency:- %d",count);
    return 0;
}