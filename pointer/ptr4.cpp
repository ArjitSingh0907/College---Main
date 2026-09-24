#include <iostream>
using namespace std;

int main(void){
    string name = "arjit";
    string *ptr = &name;

    *ptr = "tanya";

    cout << "Updated value: " << name << endl;
    return 0;
}