#include <iostream>
#include <deque>
using namespace std;

int main(void){
    deque <int> d = {1, 2, 3, 4, 5};
    for(auto it = d.rbegin() ; it != d.rend() ; it++){
        cout << *it << " ";
    }
    cout << endl;
    cout << "3rd element : " << d[2] << endl;
    return 0;
}