//swapping without using 3rd variable...
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a;
    int b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Values before swapping : a = %d and b = %d \n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Values after swapping : a = %d and b = %d \n", a, b);
    return 0;
}