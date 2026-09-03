#include <stdio.h>

int main(void){
    int a[50], n, count_pos = 0, count_neg = 0, i;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("Enter the elements : ");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if (a[i] < 0){
            count_neg++;
        } else {
            count_pos++;
        }
    }
    printf("Number of positive elements: %d\n", count_pos);
    printf("Number of negative elements: %d\n", count_neg);
    return 0;
}