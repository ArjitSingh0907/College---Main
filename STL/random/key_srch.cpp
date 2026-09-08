#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int,string> m = {{99,"Saman"}, {100,"Rhea"}, {101,"Arjit"}};

    int key = 101;
    auto it = m.find(key);

    if(it != m.end())
        cout << "Found -> " << it->first << " : " << it->second << endl;
    else
        cout << "Not found." << endl;
    return 0;
}
