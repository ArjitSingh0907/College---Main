#include <iostream>
#include <vector>
using namespace std;

int main(void){
    pair <int, pair <int, string>> a = {1369, {2468, "Ayesha"}};
    pair <int, pair <int, string>> b = {2468, {1369, "Arjit"}};

    cout << "Student 1 - " << a.first << " with " << a.second.first << " = " << a.second.second << endl;
    cout << "Student 2 - " << b.first << " with " << b.second.first << " = " << b.second.second << endl;
    return 0;
}