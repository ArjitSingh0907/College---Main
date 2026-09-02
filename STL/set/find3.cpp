#include <iostream>
#include <set>
using namespace std;

int main(void){
    set <pair <int, string>> s = {{10, "Arjit"}, {20, "Tanya"}, {30, "Rhea"}, {40, "Akash"}, {50, "Ayesha"}};
    int key;
    cout << "Students -> Arjit - 10, Tanya - 20, Rhea - 30, Akash - 40, Ayesha - 50." << endl;
    cout << "Guess which student is not from Delhi - ";
    cin >> key;
    int element = 40;

    bool found = false;
    for (auto &it : s){
        if (key == element){
            found = true;
            break;
        }
    }
    if (found){
        cout << "Correct..." << endl;
    } else {
        cout << "Not correct..." << endl;
    }
    return 0;
}