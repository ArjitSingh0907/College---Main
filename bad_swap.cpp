#include <iostream>
using namespace std;

void badswap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int main(void){
    int x = 10;
    int y = 20;
    badswap(x, y);
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}