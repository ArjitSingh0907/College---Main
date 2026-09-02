// finding factorial of a number...
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    int i;
    long long int fact = 1;
    printf("Enter a number to find it's factorial : ");

    scanf("%d", &n);
    if(n < 0){
        printf("Not defined! \n");
    } else {
        for(i = 1; i <= n; i++){
            fact *= i;
        }
        printf("Factorial of %d is %d\n", n, fact);
    }
    return 0;
}