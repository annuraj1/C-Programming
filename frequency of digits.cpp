#include<stdio.h>
int main()
{
	int n=890190798;
	int d=9;
	int count=0;
	
	while(n)
	{
		int rem=n%10;
		if(rem==d)
		{
			count++;
		}
		n=n/10;
	}
	printf("%d,count");
}
