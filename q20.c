// Q20. Write a C program to print all ASCII character with their values.
#include<stdio.h>
int main()
{
    int i=0;
    while (i<=500)
    {
        printf("%d => %c\n",i,i);
        i++;
    }
    
    return 0;
}