//to find sum of numbers from 1 to n...
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum += i;
    }

    printf("Sum of numbers from 1 to %d is: %d\n", n, sum);
    return 0;
}