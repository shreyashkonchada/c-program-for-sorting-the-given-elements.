#include<stdio.h>
int main()
{
	int rev=0,rem,n,m;
	printf("Enter the number:");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(m==rev)
	{
		printf("PALINDROME");
	}
	else
	{
		printf("not PALINDROME");
	}
		return 0;}

