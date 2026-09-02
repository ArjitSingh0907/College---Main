#include <iostream>
#include <map>
using namespace std;

int main(void){
    map <int, string> stud = {{{101, "Arjit"}, {102, "Ayesha"}, {103, "Akash"}, {104, "Tanya"}}};
    int key = 103;
    bool found = false;

    for (const auto &it : stud){
        if (it.first == key){
            cout << "Student found : " << it.second << endl;
            found = true;
            break;
        }
    }
    if (!found){
        cout << "Student not found." << endl;
    }
}