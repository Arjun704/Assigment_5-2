// Q27. Write a C program to print all Prime numbers between 1 to n.
#include<stdio.h>
int main()
{
    int n,i,min,max;
    printf("Enter number: ");
    scanf("%d%d",&min,&max);
    printf("prime no: ");
    for(n=min;n<max;n++)
    {
    	int count=0;
    	for(i=2;i<n/2;i++)
    	{
    		if(n%i==0)
    		{
    			count++;
    			break;
			}
		}
		if(count==0&&n!=1)
		{
			printf("%d ",n);
		}
	}
    
    return 0;
}
