#include<stdio.h>
	 int main(){
	 	int a,b;
	 	char op;
	 	printf("enter two numbers");
	 	scanf("%d%d",&a,&b);
	 	printf("enter operator");
	 	scanf(" %c",&op);
	 	switch(op){
	 		case '+': printf("%d",a+b);
	 		break;
	 		case '-': printf("%d",a-b); 
	 		break;
			 case '*': printf("%d",a*b);
			 break;
			 case '/': 
			 if (b!=0)
			 printf("%d",a/b);
			 else { printf("division is not possible");
			 }
			 break;
			 case '%': 
			 if (b!=0)
			 printf("%d",a%b);
			 else { printf("modular division is not possible");
			 }
			 break;
			 default : printf("invaild operators");
		 }
		 return 0;
	 }

