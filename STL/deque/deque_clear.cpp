#include <iostream>
#include <deque>
using namespace std;

int main(void){
    deque <int> d = {1, 2, 3, 4, 5};
    cout << "Size before clearing : " << d.size() << endl;
    
    d.clear();
    cout << "Size after clearing : " << d.size() << endl;
    return 0;
}