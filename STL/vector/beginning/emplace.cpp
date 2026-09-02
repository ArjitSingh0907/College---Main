#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);
    vec.emplace_back(7);
    vec.pop_back();

    for(int val : vec){
        cout << val << endl;
    }
    return 0;
}