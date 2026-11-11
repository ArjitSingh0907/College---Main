#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

int main(void){
    Node *head = new Node;
    Node *second = new Node;
    Node *third = new Node;    

    head -> data = 10;
    second -> data = 20;
    third -> data = 30;

    head -> next = second;
    second -> next = third;
    third -> next = nullptr;

    Node *curr = head;
    while (curr != nullptr){
        cout << curr -> data << " -> ";
        curr = curr -> next;
    }
    cout << "NULL" << endl;
    return 0;
}