//to print reverse of a number...
#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int num, reverse = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num != 0){
        temp = num % 10;
        reverse = reverse * 10 + temp;
        num /= 10;
    }
    printf("Reverse of the number is: %d\n", reverse);
    return 0;
}