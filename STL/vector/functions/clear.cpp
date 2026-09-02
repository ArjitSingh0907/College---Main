#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> vec(7, 10);
    for (const auto &it : vec){
        cout << it << " ";
    }
    cout << endl;
    vec.clear();
    cout << "After clearing : ";
    for (const auto &it : vec){
        cout << it << " ";
    } //nothing comes here because vector gets empty after using clear() function.
    cout << endl;
    return 0;
}