#include <iostream>
#include <map>
using namespace std;

int main(void){
    map <int, string> s = {{101, "Arjit"}, {102, "Rhea"}, {103, "Tanya"}, {104, "Ayesha"}, {105, "Akash"}};
    cout << "Size of map : " << s.size() << endl;
    cout << "Empty or not : " << (s.empty() ? "Yes" : "No") << endl;
    
    s.clear();
    cout << "Using clear function on the map..." << endl;
    
    cout << "Size of map : " << s.size() << endl;
    cout << "Empty or not : " << (s.empty() ? "Yes" : "No") << endl;
    return 0;
}