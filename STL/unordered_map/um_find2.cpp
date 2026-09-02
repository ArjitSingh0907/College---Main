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
    
    string key = "Arjit";
    auto it = m.find(key);
    if (it != m.end()){
        cout << "Student found -> " << it -> first << endl;
    } else {
        cout << "No data found." << endl;
    }
    return 0;
}