#include <iostream>
#include <unordered_map>
using namespace std;

int main(void){
    unordered_map <string, int> m = {
    {"Saman", 100},
    {"AI", 1002},
    {"Arjit", 1020},
    {"Ayesha", 1000},
    {"Sanya", 1002},
    {"Laptop", 1010},
    {"Robot", 1002},
    {"TV", 1000},
    {"Phone", 1030},
    {"Gun", 1090},
    {"Tanya", 1300}};
    
    string key = "Arjit";
    if (!m.count(key)){
        cout << "Duplicate exists." << endl;
    } else {
        cout << "Duplicate does not exists." << endl;
    }
    return 0;
}