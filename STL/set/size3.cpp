#include <iostream>
#include <set>
using namespace std;

int main(void){
    set <string> s = {"Arjit", "Tanya", "Rhea", "Ayesha", "Akash"};
    cout << "Size of set -> " << s.size() << endl;
    cout << "Empty status -> " << (s.empty() ? "Yes" : "No") << endl;

    cout << "After using clear() statement..." << endl;
    s.empty();
    cout << "Size of set -> " << s.size() << endl;
    cout << "Empty status -> " << (s.empty() ? "Yes" : "No") << endl;
    return 0;
}