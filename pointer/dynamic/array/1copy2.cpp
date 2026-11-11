#include <iostream>
using namespace std;

int main(void){
    int num;
    cout << "size of array : ";
    cin >> num;
    int count = 0;
    int *p = new int[num];
    for (int i = 0 ; i < num ; i++){
        cin >> *(p + i);
    }
    cout << "array elements -> ";
    for (int i = 0 ; i < num ; i++){
        cout << *(p + i) << " ";
    }
    cout << endl;
    for (int i = 0 ; i < num ; i++){
        if (*(p + i) > 0 && *(p + i) % 2 == 0){
            count++;
        }
    }
    int *q = new int[count];
    int *q_curr = q;
    for (int j = 0 ; j < num ; j++){
        if (*(p + j) > 0 && *(p + j) % 2 == 0){
            *q_curr = *(p + j);
            q_curr++;
        }
    }
    cout << "array 2 elements -> ";
    for (int j = 0 ; j < count ; j++){
        cout << *(q + j) << " ";
    }
    cout << endl;
    delete[] p;
    delete[] q;
    p = nullptr;
    q = nullptr;
    return 0;
}