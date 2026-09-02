#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector<pair<int, string>> student;
    cout << "Total students: " << student.size() << endl;

    student.push_back({1369, "Arjit"});
    student.push_back({2468, "Ayesha"});
    student.push_back({3290, "Tanya"});
    student.push_back({8922, "Rhea"});    

    for (auto const &it : student){
        cout << it.first << " & " << it.second << endl;
    }
    cout << endl;

    student[0].swap(student[1]);
    cout << "After swapping: " << endl;
    for (auto const &it : student){
        cout << it.first << " & " << it.second << endl;
    }
    cout << endl;

    int maxIndex = 0;
    for (int i = 1; i < student.size(); i++) {
        if (student[i].first > student[maxIndex].first) {
            maxIndex = i;
        }
    }
    cout << "Student with greatest roll-number: "
         << student[maxIndex].first << " & " << student[maxIndex].second << endl;
    cout << endl;

    cout << "Reverse order: " << endl;
    for (auto it = student.rbegin(); it != student.rend(); ++it){
        cout << it->first << " & " << it->second << endl;
    }

    return 0;
}
