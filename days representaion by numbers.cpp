//write a c program to design a calculator using switch-case

//output1:
//Enter two numbers:10 20
//ENter opration:+
//10+20=30
//
//output2:
//Enter two numbers:12 5
//Enter operation:/
//12/5=2
//
//output3:
//Enter two numbers10 0
//Enter operation:/
//Division by zero is not possible
#include<stdio.h>
int main()
{
	int a,b;
	char op;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("Enter operation:");
	scanf(" %c",&op);
	switch(op)
	{
		case '+':printf("%d+&d=%d",a,b,a+b);
		         break;
		case '-':printf("&d-%d=%d",a,b,a-b);
		         break;
		case '*':printf("%d*%d=%d",a,b,a*b);
		         break;
		case '%':if(b!=0)
		            printf("%d%%%d=%d\n",a,b,a%b);
				 else
				    printf("division with zero is not possible]\n");
				break;
		case '/':if(b!=0)
		            printf("%d/%d=%d\n",a,b,a/b);
		        else
				    printf("invalid operation");
				break;				    
	}
	return 0;
	
}
