#include <iostream>
#include <vector>
using namespace std;

int main(void){
    pair <string, pair<int, float>> p = {"Arjit", {1369, 100.0}};
    cout << p.first << " - ";
    cout << p.second.first << " & ";
    cout << p.second.second << endl;
    return 0;
}