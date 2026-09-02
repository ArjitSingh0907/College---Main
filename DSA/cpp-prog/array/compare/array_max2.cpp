#include <iostream>
#include <climits>
using namespace std;

int main(void){
    int arr[] = {199, 322, 433, 238, 989};
    int largest = INT_MIN;
    int size = 5;

    for (int i = 0 ; i < size ; i++){
        largest = max(arr[i], largest);
    }
    cout << "Largest element : " << largest << endl;
    return 0;
}