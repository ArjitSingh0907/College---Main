#include <iostream>
#include <vector>
using namespace std;

int main(void){
    pair <int, int> a = {3, 13};
    pair <int, int> b = {7, 9};

    if (a > b){
        cout << "a is greater!" << endl;
    } else {
        cout << "b is greater!" << endl;
    }
    return 0;
}