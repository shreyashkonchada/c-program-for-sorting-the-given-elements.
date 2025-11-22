include<stdio.h>
int main()
{
	int rev=0,rem,n,m;
	printf("Enter the number:");
	scanf("%d",&n);
	m=n;
	
	for (rev=0;n!=0;n=n/10)
	{
		rem=n%10;
		rev=rev*10+rem;
	}
	if(m==rev)
	{
		printf("PALINDROME");
	}
	else
	{ printf("NOT PALINDROME");}
	return 0;

