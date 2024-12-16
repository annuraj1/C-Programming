#include<stdio.h>
int main()
{
	int n,i,factorial=1;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		factorial=factorial*i;
	}
	printf("factorial is %d");
}
