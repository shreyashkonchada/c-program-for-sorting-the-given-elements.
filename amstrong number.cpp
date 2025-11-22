#include<stdio.h>
int main()
{
	int n,m,rem,sum=0;
	printf("Enter the values:");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(m==sum)
	{
		printf(" Amstrong number ");
	}
	else
	{
		printf("Not Amstrong number ");
	}
	return 0;
}
