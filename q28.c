// Write a C program to find sum of all prime numbers between 1 to n.
#include<stdio.h>
int main()
{
    int n,i,min,max,sum=0;
    printf("Enter number: ");
    scanf("%d%d",&min,&max);
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
			sum +=n;
		}
	}
	printf("prime number sum b/w %d to %d => %d",min,max,sum);
    
    return 0;
}
