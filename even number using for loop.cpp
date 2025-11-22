
#include <stdio.h>

int main() {
    int n;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Even numbers from 0 to %d are:\n", n);

    
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
