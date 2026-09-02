#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <pair <int, int>> p = {{1, 2}, {3, 6}, {5, 10}, {9, 18}};
    p.push_back({11, 22});
    p.emplace_back(13, 26);


    for (auto vec : p){
        cout << vec.first << " " << vec.second << endl;
    }
    return 0;
}