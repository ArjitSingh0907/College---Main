#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <pair <int, int>> p1 = {{1, 3}, {2, 3}, {3, 4}};

    p1.push_back({4, 5});
    p1.push_back({5, 6});

    for (const auto &it : p1){
        cout << it.first << " & " << it.second << endl;
    }
    return 0;
}