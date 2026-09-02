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

    for (size_t i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << endl;
    }

    return 0;
}