// to compare two strings using pointers
#include <stdio.h>

int main(void){
    char str1[100], str2[100];
    char *ptr1, *ptr2;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    ptr1 = str1;
    ptr2 = str2;

    while (*ptr1 != '\0' && *ptr2 != '\0') {
        if (*ptr1 != *ptr2) {
            break;
        }
        ptr1++;
        ptr2++;
    }

    if (*ptr1 == '\0' && *ptr2 == '\0') {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }
    return 0;
}