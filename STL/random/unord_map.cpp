#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> um = {{99,"Saman"}, {100,"Rhea"}, {101,"Arjit"}};

    um.erase(100);

    cout << "After erasing roll 100:" << endl;
    for(auto &it : um){
        cout << it.first << " : " << it.second << endl;
    }
    return 0;
}