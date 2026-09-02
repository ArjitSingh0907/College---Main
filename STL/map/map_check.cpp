#include <iostream>
#include <map>
using namespace std;

int main(void){
    map <int, string> stud = {{101, "Arjit"}, {102, "Ayesha"}, {103, "Akash"}, {104, "Tanya"}};
    int key = 105;

    if (stud.find(key) != stud.end()){
        cout << "Student already exists..." << endl;
    } else {
        cout << "Inserting new student..." << endl;
        stud[key] = "Rhea";
    }
    for (const auto &it : stud){
        cout << it.first << " & " << it.second << endl;
    }
    return 0;
}