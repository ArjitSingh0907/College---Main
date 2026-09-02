#include <iostream>
#include <unordered_map>
using namespace std;

int main(void){
    unordered_map <int, string> m = {
    {99, "Saman"},
    {100, "Sanya"},
    {101, "Arjit"},
    {102, "Ayesha"},
    {103, "Tanya"}};

    cout << "List of students -> " << endl;
    for (auto &it : m){
        cout << it.first << " & " << it.second << endl;
    }
    return 0;
}