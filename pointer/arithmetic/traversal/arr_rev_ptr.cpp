#include <iostream>
using namespace std;

int main(void){
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int *right = &arr[6];
    int *left = arr;
    int temp;

    temp = *left;
    *left = *right;
    *right = temp;

    temp = *(left + 1);
    *(left + 1) = *(right - 1);
    *(right - 1) = temp;

    temp = *(left + 2);
    *(left + 2) = *(right - 2);
    *(right - 2) = temp;

    for (int i = 0 ; i < sizeof(arr) / sizeof(arr[0]) ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}