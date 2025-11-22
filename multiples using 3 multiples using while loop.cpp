#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter n value:");
	scanf("%d",&n);
	i=3;
	while (i<=n)
	{
		printf("%d\n",i);
		i=i+3;
	}
	return 0;
}
