#include <iostream>
#include <map>
using namespace std;

int main(void){
    map <int, string> m;
    m[101] = "Arjit";
    m[102] = "Ayesha";
    m[103] = "Tanya";
    m[104] = "Amrit";

    auto it = m.find(102);
    if(it != m.end()){
        cout << "Student found : " << it -> second << endl;
    } else {
        cout << "No student found." << endl;
    }
    return 0;
}