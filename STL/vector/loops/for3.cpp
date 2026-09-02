//printing in straight order using const iterator (cbegin and cend)

#include <vector>
#include <iostream>
using namespace std;

int main(void){
    vector <int> v = {1, 2, 3, 4, 5};
    for (auto it = v.cbegin(); it != v.cend(); ++it){
        cout << *it << " ";
    }
}