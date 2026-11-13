#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node (int val){
        data = val;
        next = nullptr;
    }
};

void insert_beg(Node* &top, int val){
    Node *new_top = new Node(val);
    new_top -> next = top;
    top = new_top;
};

void print(Node *head){
    Node *curr = head;
    while (curr != nullptr){
        cout << curr -> data << " -> ";
        curr = curr -> next;
    }
    cout << "NULL" << endl;
};

int main(void){
    Node *first = new Node(20);
    Node *second = new Node(30);
    Node *third = new Node(40);

    first -> next = second;
    second -> next = third;
    third -> next = nullptr;

    insert_beg(first, 10);
    print(first);
    
    delete first;
    delete second;
    delete third;
    return 0;
}