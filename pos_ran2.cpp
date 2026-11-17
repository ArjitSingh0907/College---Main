//inserting an element at user specified position...
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

void insert(Node *&head, int val, int pos){
    Node *new_node = new Node(val);
    Node *curr = head;
    for (int i = 0 ; i < (pos - 2) && curr != nullptr ; i++){
        curr = curr -> next;
    }
    new_node -> next = curr -> next;
    curr -> next = new_node;
};

void print(Node *&head){
    Node *curr = head;
    while (curr != nullptr){
        cout << curr -> data << " -> ";
        curr = curr -> next;
    }
    cout << "NULL" << endl;
};

void delete_all(Node *&head){
    Node *curr = head;
    while (curr != nullptr){
        Node *temp = curr -> next;
        delete curr;
        curr = temp;
    }
};

int main(void){
    int val;
    cout << "enter value to insert : ";
    cin >> val;
    int pos;
    cout << "enter position to insert to : ";
    cin >> pos;
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(40);

    first -> next = second;
    second -> next = third;
    third -> next = nullptr;

    insert(first, val, pos);
    print(first);
    delete_all(first);
    return 0;
}