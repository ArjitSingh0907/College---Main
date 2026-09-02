#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <pair <int, string>> person;
    person.push_back({1369, "Arjit"});
    person.push_back({2468, "Ayesha"});
    
    for (auto const &it : person){
        cout << it.first << " & " << it.second   << endl;
    }
    return 0;
}