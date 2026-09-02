#include <iostream>
#include <unordered_map>
using namespace std;

int main(void){
    unordered_map <int, string> m;
    m[101] = "Arjit";
    m[102] = "Ayesha";
    m[103] = "Tanya";

    cout << "List of students -> " << endl;
    for (auto it = m.begin() ; it != m.end() ; it++){
        cout << it -> first << " & " << it -> second << endl;
    }
    return 0;
}