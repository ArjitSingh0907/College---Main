#include <iostream>
#include <climits>
using namespace std;
 
int main(void){
    int arr[] = {129, 114, 323, 109, 21, 2};
    int smallest = INT_MAX;
    int size = 6;

    for (int i = 1 ; i < size ; i++){
        smallest = min(arr[i], smallest);
    }
    cout << "Smallest element : " << smallest << endl;
    return 0;
}