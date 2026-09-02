#include <iostream>
#include <unordered_map>
using namespace std;

int main(void){
    unordered_map <string, int> m = {
    {"Saman", 99},
    {"Rhea", 100},
    {"Arjit", 101},
    {"Ayesha", 102},
    {"Tanya", 103}};
    
    m.erase("Arjit");
    cout << "After erasing a student from list..." << endl;
    for (auto &it : m){
        cout << it.first << " & " << it.second << endl;
    }
    return 0;
}