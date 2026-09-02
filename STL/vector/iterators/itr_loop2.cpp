#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> v = {1, 2, 3, 4, 5};
    for (vector <int>::reverse_iterator it = v.rbegin(); it != v.rend(); it++) {
        cout << *it << " ";
    }
    return 0;
}