#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    v.emplace_back(6);
    v.emplace_back(7);
    v.emplace_back(8);
    v.emplace_back(9);
    v.emplace_back(10);

    for (const auto &it : v){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}