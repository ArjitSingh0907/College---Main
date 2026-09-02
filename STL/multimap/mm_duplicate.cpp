#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> students = {
        {101,"Arjit"}, {101,"Ayesha"}, {102,"Tanya"}, {102,"Rhea"}
    };

    int key = 101;
    cout << "Roll " << key << " has " << students.count(key) << " entries." << endl;
    return 0;
}