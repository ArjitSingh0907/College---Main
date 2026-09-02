#include <iostream>
using namespace std;

int main(void){
    int arr[] = {199, 322, 433, 2318, 89};
    int largest = arr[0];
    int size = 5;

    for (int i = 0 ; i < size ; i++){
        largest = max(arr[i], largest);
    }
    cout << "Largest element : " << largest << endl;
    return 0;
}