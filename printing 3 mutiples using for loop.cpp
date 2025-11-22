#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter n value:");
	scanf("%d",&n);
	for(i=3;i<=n;i+=3)
	{
		printf("%d\n",i);
	}
	return 0;
}
