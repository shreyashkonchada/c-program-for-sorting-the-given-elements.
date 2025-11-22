#include<stdio.h>
int main(){
	int n,rev,r;
	scanf("%d",&n);
	for (rev=0;n!=0;n=n/10){
		r=n%10;
		rev=rev*10+r;
	}
	printf("%d",rev);
	return 0;
}
