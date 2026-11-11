#include <iostream>
using namespace std;

int main(void){
    int num;
    cout << "size of array : ";
    cin >> num;

    int *p = new int[num];
    for (int i = 0 ; i < num ; i++){
        cin >> *(p + i);
    }
    for (int i = 0 ; i < num ; i++){
        cout << *(p + i) << " ";
    }
    cout << endl;
    int *max = p;
    int *min = p;
    int *curr_ptr = (p + 1);

    while (curr_ptr < (p + num)){
        if (*curr_ptr < *max){
            max = curr_ptr;
        }
        if (*curr_ptr > *min){
            min = curr_ptr;
        }
        curr_ptr++;
    }
    cout << "max -> " << *max << endl;
    cout << "min -> " << *min << endl;
    delete[] p;
    p = nullptr;
    return 0;
}