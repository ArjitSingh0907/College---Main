//printing using dynamic programming - tabulation method.

#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> vec1(5, 10);
    vector <int> vec2(vec1);

    for (const auto& val : vec1){
        cout << val << " ";
    }

    cout << endl;

    for (const auto& val : vec2){
        cout << val << " ";
    }
}