//dynamic heap of array
#include <iostream>
using namespace std;

int main(void){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int *p = new int[n];
    for (int i = 0 ; i < n ; i++){
        *(p + i) = (i + 3) * 10;
    }
    for (int i = 0 ; i < n ; i++){
        cout << *(p + i) << " ";
    }
    delete[] p;
    p = nullptr;
    return 0;
}