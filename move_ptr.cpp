#include <iostream>
using namespace std;

int main(void){
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int *ptr = arr;
    int *end = &arr[6];

    while (ptr < end){
        cout << *ptr << " ";
        ptr++;
    }
    return 0;
}