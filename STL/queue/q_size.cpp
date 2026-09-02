#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(void){
    vector <int> p = {1, 3};
    p.push_back(3);
    p.emplace_back(4);
    p.emplace_back(5);
    p.pop_back();

    for (const auto &it : p){
        cout << it << " ";
    }
    cout << endl;
    cout << "Size : " << p.size() << endl;
    return 0;
}