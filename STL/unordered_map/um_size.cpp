#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,string> students = {{101,"Arjit"}, {102,"Ayesha"}, {103,"Tanya"}};

    cout << "Size before clear: " << students.size() << endl;
    cout << "Is empty? " << (students.empty() ? "Yes" : "No") << endl;

    students.clear();

    cout << "Size after clear: " << students.size() << endl;
    cout << "Is empty now? " << (students.empty() ? "Yes" : "No") << endl;
    return 0;
}