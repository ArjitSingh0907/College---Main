#include <iostream>
#include <vector>
using namespace std;

int main(void){
    pair <int, string> a = {1369, "Arjit"};
    pair <int, string> b = {2468, "Ayesha"};

    cout << "Before swapping - " << endl;
    cout << "Student 1 : " << a.first << " , " << a.second << endl;
    cout << "Student 2 : " << b.first << " , " << b.second << endl;

    a.swap(b);
    cout << "After swapping : " << a.first << " , " << a.second << endl;
    cout << "Student 1 : " << a.first << " , " << a.second << endl;
    cout << "Student 2 : " << b.first << " , " << b.second << endl;
    return 0;
}