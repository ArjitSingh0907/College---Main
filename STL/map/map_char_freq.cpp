#include <iostream>
#include <map>
using namespace std;

int main() {
    string s = "programming";
    map<char,int> freq;

    for(char c : s){
        freq[c]++;
    }

    cout << "Character frequencies:" << endl;
    for(auto &p : freq){
        cout << p.first << " -> " << p.second << endl;
    }

    freq['m'] = 10;

    cout << "After update:" << endl;
    for(auto &p : freq){
        cout << p.first << " -> " << p.second << endl;
    }
}
