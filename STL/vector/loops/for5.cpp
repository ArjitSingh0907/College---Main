#include <vector>
#include <iostream>
using namespace std;

int main(void){
    vector <int> v = {1, 2, 3, 4, 5};
    for (const auto& val : v){
        cout << val << " ";
    }
}