#include <iostream>
using namespace std;

int main(void){
    int arr[100];

    for (int i = 0 ; i < 100 ; i++){
        arr[i] = -1;
    }
    
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    int j = 0;
    int elm;

    while (arr[j] != -1){
        j++;
    }

    cout << "enter element to insert : ";
    cin >> elm;

    arr[j] = elm;
    cout << "The elements of the array after insertion are: ";
    for(int x = 0; x < j + 1; x++){
        cout << arr[x] << " ";
    }
    cout << endl;
    return 0;
}