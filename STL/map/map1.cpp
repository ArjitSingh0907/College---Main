#include <iostream>
#include <map>
using namespace std;

int main(void){
    map <string, int> m;
    m["Tv"] = 100;
    m["Phone"] = 120;
    m["Laptop"] = 70;

    for (const auto &it : m){
        cout << it.first << " & " << it.second << endl;
    }
    return 0;
}