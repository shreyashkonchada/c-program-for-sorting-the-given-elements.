#include<stdio.h>
int main(){
	int s;
	scanf(" %c",&s);
	if ((s>='a'&&s<='z')||(s>='A'&&s<='Z')){
		if (s>='a'&&s<='z'){
			printf("lower case");
		}
	 else if (s>='A'&&s<='Z'){
			printf("upper case");
		}
	}
	else {
		printf("not an alphabelt");
	}
	return 0;
}
