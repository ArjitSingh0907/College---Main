#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> students = {
        {101,"Arjit"}, {101,"Ayesha"}, {102,"Tanya"}, {103,"Rhea"}
    };

    cout << "Forward traversal:" << endl;
    for(auto it = students.begin(); it != students.end(); ++it){
        cout << it->first << " " << it->second << endl;
    }

    cout << "Reverse traversal:" << endl;
    for(auto it = students.rbegin(); it != students.rend(); ++it){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}