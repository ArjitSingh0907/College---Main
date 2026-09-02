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

    cout << "value of vector at index 2 : " << vec[2] << endl;
    cout << "value of vector at index 3 : " << vec.at(3) << endl;

    return 0;
}