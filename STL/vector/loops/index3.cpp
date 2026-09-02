//printing in a row

#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> v1(10, -1);
    vector <int> v2(3, -3);

    for (const auto& val : v1){
        cout << val;
    }

    for (const auto& val : v2){
        cout << val;
    }
}