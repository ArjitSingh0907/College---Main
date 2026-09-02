#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <pair <int, string>> student;
    student.push_back({101, "Arjit"});
    student.emplace_back(102, "Aryan");
    student.emplace_back(103, "Tanya");
    student.emplace_back(104, "3rd one");
    student.push_back({105, "4th one"});
    student.push_back({106, "5th one"});

    for (const auto &it : student){
        cout << it.first << " & " << it.second << endl;
    }
    return 0;
}