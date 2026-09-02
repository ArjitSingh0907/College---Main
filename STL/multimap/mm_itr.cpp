#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<int,string> s = {
        {90,"Arjit"}, {85,"Ayesha"}, {90,"Tanya"}, {70,"Rhea"}
    };

    cout << "Forward iterator -> " << endl;
    for (auto it = s.begin() ; it != s.end() ; it ++){
        cout << it -> first << " & " << it -> second << endl;
    }
    cout << endl;
    cout << "Backward iterator -> " << endl;
    for (auto ir = s.rbegin() ; ir != s.rend() ; ir++){
        cout << ir -> first << " & " << ir -> second << endl;
    }
    return 0;
}