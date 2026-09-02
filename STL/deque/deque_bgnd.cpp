#include <iostream>
#include <deque>
using namespace std;

int main(void){
    deque <int> d = {1, 2, 3, 4, 5};
    cout << "First element of deque : " << *(d.begin()) << endl;
    cout << "Last element of deque : " << *(d.end()-1) << endl;
    return 0;
}