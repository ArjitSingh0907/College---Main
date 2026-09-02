//to check palindrome of a number...
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n, original, reverse = 0, remainder;
    printf("Enter a number : ");
    scanf("%d", &n);

    original = n;

    while(n != 0){
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    if (original == reverse){
        printf("Palindrome.");
    } 
    else {
        printf("Not palindrome.");
    }
    return 0;
}