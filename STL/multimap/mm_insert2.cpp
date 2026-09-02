#include <iostream>
#include <map>
using namespace std;

int main(void){
    multimap <int, string> m;
    m.emplace(102, "Laptop");
    m.emplace(102, "Tablet");
    m.emplace(104, "Watch");
    m.emplace(105, "Television");
    m.emplace(107, "Phone");

    for (auto &it : m){
        cout << it.first << " & " << it.second << endl;
    }
    return 0;
}