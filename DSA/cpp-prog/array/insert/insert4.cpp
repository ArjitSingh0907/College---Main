#include <iostream>
using namespace std;

int main(void){
    int key, pos, num, size = 5;
    int arr[10] = {1, 2, 3, 4, 5};
    cout << "Enter how many element to insert : ";
    cin >> num;
    
    for(int i = 0 ; i < num ; i++){
        cout << "enter the element : ";
        cin >> key;
        cout << "enter the position : ";
        cin >> pos;

        for(int j = size ; j > pos ; j--){
            arr[j] = arr[j - 1];
        }
        size++;
        arr[pos] = key;
    }
    cout << "Updated array -> " << endl;
    for (int x = 0 ; x < size ; x++){
        cout << arr[x] << " ";
    }
    cout << endl;
    return 0;
}