#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

int main(void){
    Node *first = new Node;
    Node *second = new Node;
    Node *third = new Node;
    Node *end = new Node;

    first -> data = 1;
    second -> data = 3;
    third -> data = 6;
    end -> data = 9;

    first -> next = second;
    second -> next = third;
    third -> next = end;
    end -> next = nullptr;

    Node *curr = first;
    while (curr != nullptr){
        cout << curr -> data << " -> ";
        curr = curr -> next;
    }
    cout << "NUll" << endl;
    return 0;
}