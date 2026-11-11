#include <iostream>
using namespace std;

int main(void){
    int num;
    cout << "enter size of array : ";
    cin >> num;

    int *p = new int[num];
    for (int i = 0 ; i < num ; i++){
        *(p + i) = i * 2;
    }
    cout << "array elements are : ";
    for (int i = 0 ; i < num ; i++){
        cout << *(p + i) << " ";
    }
    delete[] p;
    p = nullptr;
    return 0;
}