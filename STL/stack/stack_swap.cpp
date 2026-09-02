#include <iostream>
#include <stack>
using namespace std;

int main(void){
    stack <int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    stack <int> r;
    r.swap(s);

    cout << "Size of s : " << s.size() << endl;
    cout << "Size of r : " << r.size() << endl;
    return 0;
}