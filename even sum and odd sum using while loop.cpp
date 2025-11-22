#include<stdio.h>
int main(){
	int n,i=0,esum=0,osum=0;
	scanf("%d",&n);
	while(i<=n){
		if (i%2==0){
			esum=esum+i;
		}
		else {
			osum=osum+i;
		}
		i++;
	}
	printf("esum=%d\n",esum);
	printf("osum=%d",osum);
	return 0;
}
