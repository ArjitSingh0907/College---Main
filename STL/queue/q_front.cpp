#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> p(5, 10);

    for(const auto &it : p){
        cout << it << " ";
    }
    cout << endl;
    cout << p.front() << endl;
    return 0;
}