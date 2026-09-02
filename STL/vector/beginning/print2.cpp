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

    for (auto it = vec.begin(); it != vec.end(); it ++)
    {
        cout << *it << endl;
    }

    return 0;
}