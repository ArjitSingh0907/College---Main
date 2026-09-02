#include <iostream>
#include <map>
using namespace std;

int main(void){
    map <int, string> stud = {{{101, "Arjit"}, {102, "Ayesha"}, {103, "Akash"}, {104, "Tanya"}}};
    int key = 103;

    auto it = stud.find(key);
    if (it != stud.end()){
        cout << "Student found : " << it -> second << endl;
    } else {
        cout << "Student not found." << endl;
    }

    for (auto itr = stud.begin() ; itr != stud.end() ; itr++){
        cout << itr -> first << " " << itr -> second << endl;
    }
    return 0;
}