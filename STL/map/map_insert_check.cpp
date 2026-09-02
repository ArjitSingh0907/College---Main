#include <iostream>
#include <map>
using namespace std;

int main(void){
    map <int, string> count;
    auto result_1 = count.insert({101, "India"});
    auto result_2 = count.insert({101, "India"});

    cout << "Insert 1 -> " << (result_1.second ? "Yes" : "No") << endl;
    cout << "Insert 2 -> " << (result_2.second ? "Yes" : "No") << endl;

    for (auto &itr : count){
        cout << itr.first << " & " << itr.second << endl;
    }
    return 0;
}