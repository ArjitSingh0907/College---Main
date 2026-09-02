//swapping variables with 3rd variable...
#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int a;
    int b;
    int temp;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("values before swapping : a = %d and b = %d \n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("Values after swapping : a = %d and b = %d \n", a, b);
    return 0;
}