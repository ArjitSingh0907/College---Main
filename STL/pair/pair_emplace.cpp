#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(void){
    vector <pair <int, string>> p1;
    p1.emplace_back(100, "one");
    p1.emplace_back(101, "two");

    for (const auto &it : p1){
        cout << it.first << " & " << it.second << endl;
    }
    return 0;
}