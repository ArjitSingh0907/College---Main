#include <iostream>
using namespace std;
 
int main(void){
    int arr[] = {129, 114, 123, 109, 21, 223};
    int largest = arr[0];
    int size = 6;

    for (int i = 1 ; i < size ; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "Largest element : " << largest << endl;
    return 0;
}