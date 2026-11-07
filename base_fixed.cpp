#include <iostream>
using namespace std;

int main(void){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int *ptr = arr;

    for (int i = 0 ; i < 6 ; i++){
        cout << *(ptr + i) << " ";
    }
    return 0;
}