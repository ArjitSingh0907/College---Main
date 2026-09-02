#include <iostream>
#include <map>
using namespace std;

int main(void){
    map <int, string> stud = {{101, "Arjit"}, {102, "Ayesha"}, {103, "Akash"}, {104, "Tanya"}};
    
    auto first = stud.begin();
    auto last = prev(stud.end());

    cout << "First entry -> " << first -> first << " & " << first -> second << endl;
    cout << "Last entry -> " << last -> first << " & " << last -> second << endl;
    return 0;
}