#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> students;
    students.insert({101,"Arjit"});
    students.insert({101,"Ayesha"});
    students.insert({102,"Tanya"});
    students.insert({103,"Rhea"});

    cout << "Student list:" << endl;
    for(auto &s : students){
        cout << s.first << " " << s.second << endl;
    }
    return 0;
}
