#include <iostream>
using namespace std;

int main(void){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int *p = new int[n];
    for (int i = 0 ; i < n ; i++){
        *(p + i) = (i + 3) * 10;
    }
    for (int i = 0 ; i < n ; i++){
        cout << *(p + i) << " ";
    }
    cout << endl;
    delete[] p;
    p = nullptr;
    return 0;
}