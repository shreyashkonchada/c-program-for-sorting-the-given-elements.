#include<stdio.h>
int main(){
	int i=1;
	a1:
		printf("%d\t",i);
		i++;
		if (i<=10)
		goto a1;
		return 0;
}
