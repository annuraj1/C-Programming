#include<stdio.h>
int main()
{
	int num,x,sum=0,mem;
	
	printf("Enter a number\n");
	scanf("%d",&num);
	
	num=mem;
	
	while(num>0)
	{
		x=num%10;
		num=num/10;
		sum=sum+x*x*x;
	}
	
	if(sum==mem)
	{
		printf("Armstrong number");
    }
	  else  
	{
		printf("Not an armstrong number");
	}
	    
    }
	
	

	
	

