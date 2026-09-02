#include <iostream>
#include <map>
using namespace std;

int main(void){
    map <int, string> s = {{101, "Arjit"}, {102, "Rhea"}, {103, "Tanya"}, {104, "Ayesha"}};
    int key;
    cout << "Enter between 101 - 104 to search for : ";
    cin >> key;
    auto it = s.find(key);

    if (s.find(key) != s.end()){
        cout << "Entry found -> " << endl;
        cout << it -> first << " & " << it -> second << endl;
    } else {
        cout << "Entry not found." << endl;
    }
    return 0;
}