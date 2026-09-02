#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> v1(3, 10);
    vector <int> v2(4, 20);
    vector <int> v3(5, 30);
    for (int val : v1){
        cout << val << " ";
    }
    cout << endl;
    for (int val : v2){
        cout << val << " ";
    }
    cout << endl;
    for (int val : v3){
        cout << val << " ";
    }
}