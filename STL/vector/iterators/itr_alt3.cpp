// alternative to itr2.cpp
#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> vec = {1, 2, 3, 4, 5};
    for (int val : vec){
        cout << val << " ";
    }
    return 0;
}