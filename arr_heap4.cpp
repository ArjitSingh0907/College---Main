#include <iostream>
using namespace std;

int main(void){
    int n;
    cout << "Size of array -> ";
    cin >> n;

    int *p = new int[n];
    for (int i = 0 ; i < n ; i++){
        *(p + i) = (i + 11) + 1369;
    }
    cout << "Array elements are -> ";
    for (int i = 0 ; i < n ; i++){
        cout << *p + i << " ";
    }
    cout << endl;
    delete[] p;
    p = nullptr;
    return 0;
}