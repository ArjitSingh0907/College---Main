// reversing a string in C
#include <stdio.h>

int main(void){
    char str[100], temp;
    int i, j;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++);
    j = i - 1;

    for (i = 0; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("Reversed string: %s", str);
    return 0;
}