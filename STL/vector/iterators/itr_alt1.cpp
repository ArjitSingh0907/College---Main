//cleaner alternative to iterator vector element printing - 1...
#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> vec = {1, 2, 3, 4, 5};
    for (auto it = vec.begin(); it != vec.end(); it++){
        cout << *it << " ";
    }
    return 0;
}