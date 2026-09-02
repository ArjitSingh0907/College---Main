#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int,string> stud = {
        {101,"Arjit"}, {102,"Ayesha"}, {103,"Tanya"}, {104,"Amrit"}
    };
    
    cout << "Forward -----> " << endl;
    for (auto it = stud.begin() ; it != stud.end() ; it++){
        cout << it -> first << " & " << it -> second << endl;
    }
    
    cout << "Backward -----> " << endl;
    for (auto itr = stud.rbegin() ; itr != stud.rend() ; itr++){
        cout << itr -> first << " & " << itr -> second << endl;
    }
    return 0;
}