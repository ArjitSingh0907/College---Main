#include <iostream>
using namespace std;

int main(void){
    int *p = new int[5];
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;

    for (int i = 0 ; i < 5 ; i++){
        cout << p[i] << " ";
    }
    cout << endl;
    delete[] p;
    p = nullptr;
    return 0;
}