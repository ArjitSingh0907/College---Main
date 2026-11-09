//dynamic heap of array
#include <iostream>
using namespace std;

int main(void){
    int n;
cout << "Enter array size: ";
cin >> n;

int *dArr = new int[n];

for (int i = 0; i < n; i++) {
    *(dArr + i) = (i + 1) * 10;
}

delete[] dArr;
dArr = nullptr;
}