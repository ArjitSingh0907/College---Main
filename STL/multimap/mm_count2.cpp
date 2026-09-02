#include <iostream>
#include <map>
using namespace std;

int main(void){
    multimap <string, int> m;
    m.emplace("Laptop", 102);
    m.emplace("Robot", 134);
    m.emplace("Watch", 332);
    m.emplace("Television", 443);
    m.emplace("Earphone", 554);
    m.emplace("Robot", 224);
    m.emplace("Robot", 112);
    m.emplace("Robot", 100);

    cout << "List -> " << endl;
    for (auto &it : m){
        cout << it.first << " & " << it.second << endl;
    }

    cout << "Checking duplicate items..." << endl;
    string dept = "Robot";
    cout << "there are -> " << m.count(dept) << " duplicates here of " << dept << "." << endl;
    return 0;
}