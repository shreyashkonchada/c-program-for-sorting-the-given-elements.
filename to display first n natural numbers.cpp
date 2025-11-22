//to display first n natural numbers
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter a number:");
	scanf("%d,&n");
	while(i<=n)
	{
		printf("%d\t",n);
		i=i+1;
	}
    return 0;
}
