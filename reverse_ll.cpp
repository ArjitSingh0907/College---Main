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

void insert_beg(Node *&head, int val){
    Node *new_node = new Node(val);
    new_node -> next = head;
    head = new_node;
};

void print(Node *head){
    Node *curr = head;
    while (curr != nullptr){
        cout << curr -> data << " -> ";
        curr = curr -> next;
    }
    cout << "NULL" << endl;
};

void delete_all(Node *head){
    Node *curr = head;
    while (curr != nullptr){
        Node *temp = curr -> next;
        delete curr;
        curr = temp;
    }
};

int main(void){
    Node *head = nullptr;
    int num;
    cout << "Number of integers : ";
    cin >> num;
    int value;
    for (int i = 0 ; i < num ; i++){
        cout << "enter value : ";
        cin >> value;
        insert_beg(head, value);
    }
    print(head);
    delete_all(head);
    return 0;
}