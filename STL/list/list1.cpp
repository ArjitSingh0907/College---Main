#include <iostream>
#include <list>
using namespace std;

int main(void){
    list <int> ls = {1, 2, 3, 4, 5};
    cout << "First element: " << ls.front() << endl;
    cout << "Last element: " << ls.back() << endl;
    return 0;
}