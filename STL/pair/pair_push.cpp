#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <pair <int, string>> student;
    pair <int, string> p1(101, "random");
    student.push_back(p1);

    student.push_back({102, "random_2"});
    for (const auto &it : student){
        cout << it.first << " & " << it.second << endl;
    }
    return 0;
}