// finding length of a string in c
#include <stdio.h>
#define MAX 100

int main(void){
    int len = 0;
    char *ptr, str [MAX];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    ptr = str;
    while (*ptr != '\0') {
        len++;
        ptr++;
    }
    printf("Length of the string is: %d\n", len);
    return 0;
}