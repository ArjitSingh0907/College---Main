#include <iostream>
using namespace std;

int main() {
    char str[100];
    int length = 0;

    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    cout << "Length = " << length << endl;

    return 0;
}