#include <stdio.h>

int main(void){
    int d, b[20], i, j;
    printf("Input Decimal : ");
    scanf("%d", &d);

    i = 0;
    while (d > 0){
        b[i] = d % 2;
        d = d / 2;
        i++; 
    }
    printf("Binary : ");
    for(j = i - 1; j >= 0; j--){
        printf("%d", b[j]);
    }
    printf("\n");
    return 0;
}