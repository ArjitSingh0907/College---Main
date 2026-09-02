//printing in a column

#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> v1(10, -1);
    vector <int> v2(3, -3);

    for (const auto& val : v1){
        cout << val << endl;
    }

    for (const auto& val : v2){
        cout << val << endl;
    }
}