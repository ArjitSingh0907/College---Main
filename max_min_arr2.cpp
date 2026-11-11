#include <iostream>
using namespace std;

int main(void){
    int num;
    cout << "size of array : ";
    cin >> num;

    if (num <= 0){
        cout << "invalid entry!" << endl;
        return -1;
    }

    int *p = new int[num];
    for (int i = 0 ; i < num ; i++){
        cin >> *(p + i);
    }
    cout << "array elements -> ";
    for (int i = 0 ; i < num ; i++){
        cout << *(p + i) << " ";
    }
    cout << endl;
    
    int *max = p;
    int *min = p;
    int *curr = p + 1;

    while (curr < p + num){
        if (*curr > *max){
            max = curr;
        }
        if (*curr < *min){
            min = curr;
        }
        curr++;
    }

    cout << "max -> " << *max << endl;
    cout << "min -> " << *min << endl;
    delete[] p;
    p = nullptr;
    return 0;
}