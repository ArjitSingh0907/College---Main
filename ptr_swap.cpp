#include <iostream>
using namespace std;

void ptr_swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "After swapping numbers -> a = " << *a << ", b = " << *b << endl;
}

int main(void){
    int x = 10;
    int b = 20;
    cout << "Before swapping numbers -> x = " << x << ", b = " << b << endl;
    ptr_swap(&x, &b);
    return 0;
}