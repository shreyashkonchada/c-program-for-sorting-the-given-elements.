#include<stdio.h>
int main(){
	int n,i,f1,f2,f3;
	printf("enter a number");
	scanf("%d",&n);
	for (f1=0,f2=1;n>=f1;f3=f1+f2,f1=f2,f2=f3){
		if (n==f1){
			printf("yes");
			return 0;
		}
	}
	printf("No");
	return 0;
	
}
