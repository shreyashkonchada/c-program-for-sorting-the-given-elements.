#include<stdio.h>
int main(){
	char s;
	scanf(" %c",&s);
	if ((s>=65&&s<=90)||(s>=97&&s<=122))
	printf("yes");
	else printf("no");
	return 0;
}
