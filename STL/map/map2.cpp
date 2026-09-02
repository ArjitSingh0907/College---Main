#include <iostream>
#include <map>
using namespace std;

int main(void){
    map <int, string> m;
    m[101] = "Arjit";
    m[102] = "Ayesha";
    m.insert({103, "Tanya"});
    m.insert({104, "Rhea"});

    for (const auto &it : m){
        cout << it.first << " & " << it.second << endl;
    }
    return 0;
}