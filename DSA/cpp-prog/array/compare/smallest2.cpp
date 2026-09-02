#include <iostream>
using namespace std;
 
int main(void){
    int arr[] = {129, 114, 323, 109, 21, 2};
    int smallest = arr[0];
    int size = 6;

    for (int i = 1 ; i < size ; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
        }
    }
    cout << "Smallest element : " << smallest << endl;
    return 0;
}