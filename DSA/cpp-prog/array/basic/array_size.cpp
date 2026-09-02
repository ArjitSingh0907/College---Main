#include <iostream>
using namespace std;
 
int main(void){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    cout << size << endl;
    return 0;
}