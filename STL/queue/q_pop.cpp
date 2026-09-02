#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> p = {1, 2, 3, 4, 5};
    p.pop_back();

    for (const auto &it : p){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}