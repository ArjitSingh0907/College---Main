#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> vec(6, 10);
    for (const auto &it : vec){
        cout << it << " ";
    }
    cout << endl;
    vec.erase(vec.begin() + 2);
    for (const auto &it : vec){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}