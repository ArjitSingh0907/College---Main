#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> vec(9, 7);
    for (const auto &it : vec){
        cout << it << " ";
    }
    cout << endl;
    cout << "Size : " << vec.size() << endl;
    cout << "Capacity : " << vec.capacity() << endl;
    vec.clear();
    cout << "After clearing : ";
    for (const auto &it : vec){
        cout << it << " ";
    } //nothing comes here because vector gets empty after using clear() function.
    cout << endl;
    cout << "Size : " << vec.size() << endl;
    cout << "Capacity : " << vec.capacity() << endl;
    return 0;
}