#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if (a>90){
		printf("grade o");
	}
	else if (a<=90&&a>=80){
		printf("grade s");
	}
	else if (a<=80&&a>=70){
		printf("grade a");
	}else if (a<=70&&a>=60){
		printf("grade b");
	}else if (a<=90&&a>=50){
		printf("grade c");
	}else {
		printf("fail");
	}
}
