#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> vec(6, 10);
    cout << "Before inserting: ";
    for (const auto &it : vec){
        cout << it << " ";
    }
    cout << endl;
    vec.insert(vec.begin() + 3, 2, 4);
    cout << "After inserting : ";
    for (const auto &it : vec){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}