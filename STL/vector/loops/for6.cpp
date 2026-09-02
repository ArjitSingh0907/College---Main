//printing vector in reverse order using index  

#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> v = {1, 2, 3, 4, 5};
    for (int i = v.size() - 1; i >= 0; i--){
        cout << v[i] << " ";
    }
}