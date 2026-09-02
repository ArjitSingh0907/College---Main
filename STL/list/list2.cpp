#include <iostream>
#include <list>
using namespace std;

int main(void){
    list <int> ls = {1, 2, 3, 4, 5};
    cout << "Element at 4th index : " << ls.front() + 4 << endl;
    cout << "Element at 2nd index : " << ls.front() + 2 << endl;
    return 0;
}