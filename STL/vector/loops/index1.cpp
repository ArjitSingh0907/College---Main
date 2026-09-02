#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.emplace_back(5);
    v.pop_back();

    for (int val : v){
        cout << val << " ";
    }

    cout << endl;
    cout << "value at index 2 is: " << v.at(2) << endl;
    cout << "value at index 0 is: " << v.at(0) << endl; 
    cout << "value at index 1 is: " << v[1] << endl;
 

    return 0;
}