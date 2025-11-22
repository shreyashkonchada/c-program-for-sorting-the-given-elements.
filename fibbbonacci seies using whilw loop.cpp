#include<stdio.h>
int main(){
	int n,i=0,f1=0,f2=1,f3;
	scanf("%d",&n);
	while(i<n){
		printf("%d\t",f1);
		f3=f1+f2;
		f1=f2;
		f2=f3;
		i++;
	}
	return 0;
	
}
