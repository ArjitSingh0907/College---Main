#include <iostream>
#include <set>
using namespace std;

int main(void){
    set <string> s = {"Arjit", "Tanya", "Rhea", "Ayesha", "Akash"};
    cout << "Size of set -> " << s.size() << endl;
    cout << "Empty status -> " << (s.empty() ? "Yes" : "No") << endl;

    cout << "After clearing one element from set..." << endl;
    s.erase("Tanya");
    cout << "Size of set -> " << s.size() << endl;
    cout << "Empty status -> " << (s.empty() ? "Yes" : "No") << endl;

    s.clear();
    cout << "After using erase() statement..." << endl;
    cout << "Size of set -> " << s.size() << endl;
    cout << "Empty status -> " << (s.empty() ? "Yes" : "No") << endl;
    return 0;
}