#include<stdio.h>
int main(){
	int d;
	printf("enter ur number");
	scanf("%d",&d);
	switch (d){
		case 1:printf("sunday\n");
		break;
		case 2:printf("monday");
		break;
		case 3:printf("tuesday");
		break;
		case 4:printf("wednesday");
		break;
		case 5:printf("thursday");
		break;
		case 6:printf("friday");
		break; 
		case 7:printf("saturday");
		break;
	default: printf("invalid day");
	}
	return 0;
}
