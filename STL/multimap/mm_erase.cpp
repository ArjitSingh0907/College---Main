#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> students = {
        {101,"Arjit"}, {101,"Ayesha"}, {102,"Tanya"}, {103,"Rhea"}
    };

    students.erase(101);

    cout << "After erasing roll 101:" << endl;
    for(auto &s : students){
        cout << s.first << " " << s.second << endl;
    }
    return 0;
}