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

    int count = 0;

    for (int i = 0 ; i < num ; i++){
        if (*(p + i) % 3 == 0 && *(p + i) != 0){
            count++;
        }
    }

    if (count == 0){
        cout << "No multiples of 3." << endl;
        delete[] p;
        p = nullptr;
        return 1;
    }

    int *q = new int[count];
    int *dest = q;

    for (int i = 0 ; i < num ; i++){
        if (*(p + i) % 3 == 0 && *(p + i) != 0){
            *dest = *(p + i);
            dest++;
        }
    }

    cout << "array elements : ";
    for (int i = 0 ; i < count ; i++){
        cout << *(q + i) << " ";
    }
    
    cout << endl;
    delete[] p;
    delete[] q;
    p = nullptr;
    q = nullptr;
    return 0;
}