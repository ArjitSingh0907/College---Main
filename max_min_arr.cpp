#include <iostream>
using namespace std;

int main(void){
    int num;
    cout << "size of array : ";
    cin >> num;

    if (num <= 0){
        cout << "invalid entry!" << endl;
        return -1;
    } else {
        cout << "enter elements of array : ";
        int *p = new int[num];
        for (int i = 0 ; i < num ; i++){
            cin >> *(p + i);
        }
        cout << "array elements are : ";
        for (int i = 0 ; i < num ; i++){
            cout << *(p + i) << " ";
        }
        cout << endl;
        int max = 0;
        int min = 0;
        for (int i = 0 ; i < num ; i++){
            if (*(p + i) > *(p + max)){
                max = *(p + i);
            }
            if (*(p + i) < *(p + min)){
                min = *(p + i);
            }
        }
        cout << "max -> " << max << endl;
        cout << "min -> " << min << endl;
        delete[] p;
        p = nullptr;
    }
    return 0;
}