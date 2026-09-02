#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap<string,string> orders = {
        {"Arjit","Laptop"}, {"Arjit","Phone"}, {"Tanya","Shoes"}, {"Rhea","Book"}
    };
    orders.erase("Arjit");
    cout << "Orders after removing Arjit's -> " << endl;
    for (auto &it : orders){
        cout << it.first << " & " << it.second << endl;
    }
    return 0;
}