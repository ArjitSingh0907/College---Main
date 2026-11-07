#include <iostream>
using namespace std;

int main(void){
    int arr[] = {5, 15, 25, 35, 45, 55, 65};
    int *start = arr;
    int *end = &arr[6];
    cout << "end - start => " << end - start << endl;
    cout << "*(start + (end - start) / 2) => " << *(start + (end - start) / 2) << endl;
    return 0;
}