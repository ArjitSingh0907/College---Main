#include <iostream>
using namespace std;

int main(void){
    int num;
    cout << "size of array : ";
    cin >> num;

    int *p = new int[num];
    int sum = 0;
    for (int i = 0 ; i < num ; i++){
        *(p + i) = i + 1;
        sum = sum + *(p + i);
    }
    cout << "array elements are : ";
    for (int i = 0 ; i < num ; i++){
        cout << *(p + i) << " ";
    }
    cout << endl;
    double avg = 0;
    avg = (double)sum / num;
    cout << "sum of array elements : " << sum << endl;
    cout << "avg of array elements : " << avg << endl;
    delete[] p;
    p = nullptr;
    return 0;
}