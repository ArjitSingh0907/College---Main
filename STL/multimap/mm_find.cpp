#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> students = {
        {101,"Arjit"}, {102,"Tanya"}, {102,"Rhea"}, {103,"Ayesha"}
    };

    int key = 102;
    auto range = students.equal_range(key);

    cout << "Students with roll " << key << ":" << endl;
    for(auto it = range.first; it != range.second; ++it){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}