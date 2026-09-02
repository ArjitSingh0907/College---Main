#include <iostream>
#include <map>
using namespace std;

int main(void){
    map <int, string> emp = {{{102, "Arjit"}, {103, "Ayesha"}, {107, "Arjit"}, {104, "Akash"}, {105, "Tanya"}}};
    emp.erase(104);
    auto it = emp.begin();
    emp.erase(it);
    cout << "Updated list of employees -> " << endl;
    for (const auto &itr : emp){
        cout << itr.first << " & " << itr.second << endl;
    }
    return 0;
}