// Q26. Write a C program to check whether a number is Prime number or not.
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%2!=0 && n%i==0)
        {
            printf("%d is a prime",n);
            break;
        }
        else
        {
            printf("%d is not a prime",n);
            break;
        }
    }   
    return 0; 
}
