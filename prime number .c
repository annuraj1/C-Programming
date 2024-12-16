#include<stdio.h>
#include<conio.h>
void main()
{
	int n,count=0,i;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n==0||n==1)
	{
		printf("Its not a prime number");
	}
	else
	
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				count++;
			}
		}
	if(count==2)
	{
		printf("Its a prime number");
	}
	else
	{
		printf("Its not a prime number");
	}
}
