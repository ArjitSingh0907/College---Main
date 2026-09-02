#include <iostream>
#include <map>
using namespace std;

int main(void){
    multimap <int, string> m;
    m.emplace(102, "Laptop");
    m.emplace(102, "Tablet");
    m.emplace(104, "Watch");
    m.emplace(108, "Television");
    m.emplace(109, "Earphone");
    m.emplace(204, "AI");
    m.emplace(102, "Robot");
    m.emplace(107, "Phone");

    cout << "List -> " << endl;
    for (auto &it : m){
        cout << it.first << " & " << it.second << endl;
    }

    cout << "Checking duplicate items..." << endl;
    int dept = 102;
    cout << "there are -> " << m.count(dept) << " duplicates here." << endl;
    return 0;
}