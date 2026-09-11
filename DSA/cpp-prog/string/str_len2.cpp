#include <iostream>
#include <string>
using namespace std;

int main(void){
    char name[100];
    char *ptr;
    int length = 0;

    cout << "Enter a string: ";
    cin >> name;

    ptr = name;

    while (*ptr != '\0'){
        length++;
        ptr++;
    }
    cout << "Length of the string is: " << length << endl;
    return 0;
}