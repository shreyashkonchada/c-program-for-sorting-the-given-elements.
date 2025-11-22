
#include <stdio.h>

int main() {
    int n,i=0;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Even numbers from 0 to %d are:\n", n);
    while (i<=n){
    	 if (i%2==0){
    	 	printf("%d\t",i);
    	 	i+=2;
	}
}

    printf("\n");
    return 0;
}
