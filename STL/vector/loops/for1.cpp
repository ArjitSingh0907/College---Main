#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> v = {1, 2, 3, 4, 5};
    for (auto it = v.begin(); it != v.end(); it++){
        cout << *it << endl;
    }
}