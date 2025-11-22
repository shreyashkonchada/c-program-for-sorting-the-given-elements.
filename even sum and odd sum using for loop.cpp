#include<stdio.h>
int main(){
	int n,i,esum=0,osum=0;
	scanf("%d",&n);
	for(i=0,esum=0,osum=0;i<=n;i++){
		if (i%2==0){
			esum=esum+i;
		}
		else {
			osum=osum+i;
		}
		
	}
	printf("esum=%d\n",esum);
	printf("osum=%d",osum);
	return 0;
}
