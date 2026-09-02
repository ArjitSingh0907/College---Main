#include <iostream>
#include <deque>
using namespace std;

int main(void){
    deque <int> d1 = {1, 2, 3, 4, 5};
    deque <int> d2 = {6, 7, 8, 9, 10};

    d1.insert(d1.begin() + 2, 99);
    for (int x : d1){
        cout << x << " ";
    }
    cout << endl;

    d2.insert(d2.begin() + 4, 3, 7);
    for (int y : d2){
        cout << y << " ";
    }
    cout << endl;
    return 0;
}