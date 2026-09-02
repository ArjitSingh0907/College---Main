#include <iostream>
#include <map>
using namespace std;

int main(void){
    map <int, string> m;
    m[101] = "Arjit";
    m[102] = "Ayesha";
    m[103] = "Tanya";
    m[104] = "Amrit";

    int key = 104;
    bool found = false;

    for (const auto &it : m){
        if (it.first == key){
            cout << "Student found : " << it.second << endl;
            found = true;
            break;
        }
    }
    if (!found){
        cout << "Student not found..." << endl;
    }
    return 0;
}