#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> vec;
    vec.push_back(1);
    vec.emplace_back(3);
    vec.push_back(2);
    for (int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}