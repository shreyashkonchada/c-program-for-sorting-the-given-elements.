#include<stdio.h>
int main(){
	int r,n,sum=0;
	scanf("%d",&n);
	for (sum=0;n!=0;n=n/10){
	
		r=n%10;
		sum=sum+r;
}
		
	printf("%d",sum);
	return 0;
}
