#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> vec = {1, 2, 3, 4, 5};
    for (const auto& it : vec){
        cout << it;
    }
    vec.erase(vec.begin());
    cout << endl;
    for (const auto& val : vec){
        cout << val;
    }
    vec.erase(vec.begin() + 3);
    cout << endl;
    for( const auto& tb : vec){
        cout << tb;
    }
    return 0;
}