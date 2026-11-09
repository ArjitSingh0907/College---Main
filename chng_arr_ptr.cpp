#include <iostream>
using namespace std;

void change_array(int arr[], int size){
    for (int i = 0 ; i < size ; i++){
        *(arr + i) = *(arr + i) * 10;
    }
    cout << "After updating values of array -> ";
    for (int i = 0 ; i < size ; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main(void){
    int array[] = {1, 2, 3, 4, 5};
    cout << "Before updating values of array -> ";
    for (int i = 0 ; i < 5 ; i++){
        cout << *(array + i) << " ";
    }
    cout << endl;
    change_array(array, 5);
    return 0;
}