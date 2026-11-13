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

void insert_end(Node *&head, int val){
    if (head == nullptr){
        cout << "Empty list." << endl;
    }
    Node *new_node = new Node(val);
    Node *temp = head;
    while (temp -> next != nullptr){
        temp = temp -> next;
    }
    temp -> next = new_node;
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
    Node *start = new Node(10);
    Node *two = new Node(20);
    Node *three = new Node(30);
    Node *end = new Node(40);

    start -> next = two;
    two -> next = three;
    three -> next = end;
    end -> next = nullptr;

    insert_end(end, 50);
    print(start);

    delete start;
    delete two;
    delete three;
    delete end;
    return 0;
}