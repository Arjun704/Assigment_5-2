// Q21. Write a C program to find power of a number using for loop.
#include<stdio.h>
int main()
{
    int i,base,expo;
    long int pow=1;
    printf("Enter base and expo:- ");
    scanf("%d%d",&base,&expo);
    for(i=0;i<expo;i++)
    {
        pow *=base;
    }
    printf("%d",pow);
    return 0;
}