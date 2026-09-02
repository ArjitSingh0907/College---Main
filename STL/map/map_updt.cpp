#include <iostream>
#include <map>
using namespace std;

int main(void){
    map <int, string> m;
    m[101] = "Arjit";
    m[102] = "Ayesha";
    m[103] = "Rhea";
    m[104] = "Amrit";

    cout << "Printing initial list of students..." << endl;
    for (const auto &it : m){
        cout << it.first << " & " << it.second << endl;
    }
    
    cout << m[104] << endl;
    cout << "Updating the entry..." << endl;
    m[104] = "Akshay";

    for (const auto &it : m){
        cout << it.first << " & " << it.second << endl;
    }
    return 0;
}