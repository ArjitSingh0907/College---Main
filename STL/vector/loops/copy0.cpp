#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> vec1 = {1, 2, 3, 4, 5};
    vector <int> vec2(vec1);

    for (const auto& val : vec1){
        cout << val << " ";
    }

    cout << endl;


    for (const auto& val : vec2){
        cout << val << " ";
    }
}