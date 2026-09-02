#include <iostream>
#include <map>
using namespace std;

int main(void){
    map <int, string> prod = {{101, "Phone"}, {102, "Laptop"}, {103, "PC"}};
    int key = 104;
    auto it = prod.find(key);
    
    if (it == prod.end()){
        cout << "Inserting new product at " << key << "." << endl;
        prod.insert({104, "Xbox"});
    }

    cout << "Product list -> " << endl;
    for (const auto &itr : prod){
        cout << itr.first << " & " << itr.second << endl;
    }
    return 0;
}