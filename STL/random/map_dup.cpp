#include <iostream>
#include <set>
#include <map>
using namespace std;

int main() {
    multimap<int,string> mm = {
        {102,"Ayesha"}, {102,"Sanya"}, {102,"Laptop"}
    };

    int key = 102;
    auto range = mm.equal_range(key);

    cout << "Entries for roll " << key << ":" << endl;
    for(auto it = range.first; it != range.second; ++it){
        cout << it->first << " : " << it->second << endl;
    }
    return 0;
}
