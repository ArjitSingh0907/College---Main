#include <iostream>
#include <unordered_map>
using namespace std;

int main(void){
    unordered_map <int, string> m = {
    {99, "Saman"},
    {100, "Rhea"},
    {101, "Arjit"},
    {102, "Ayesha"},
    {103, "Tanya"}};
    
    int key = 102;
    auto it = m.find(key);
    if (it != m.end()){
        cout << "Student found -> " << it -> second << endl;
    } else {
        cout << "No data found." << endl;
    }
    return 0;
}