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
    vec.insert(vec.begin() + 3, 3, 4);
    cout << "After inserting : ";
    for (const auto &it : vec){
        cout << it << " ";
    }
    cout << endl;
    cout << "element at index 3 : " << vec.at(3) << endl;
    cout << "element at index 4 : " << vec.at(4) << endl;
    cout << "element at index 5 : " << vec.at(5) << endl;
    cout << "element at index 6 : " << vec.at(6) << endl;
    return 0;
}