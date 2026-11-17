#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node (int val){
        data = val;
        next = nullptr;
    }
};

void before_target(Node *&head, int target, int val){
    Node *curr = head;
    while (curr != nullptr && curr -> data == target){
        curr = curr -> next;
    }
    if (curr == nullptr){
        cout << "Target not found." << endl;
        return;
    }
    Node *new_node = new Node(val);
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
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    
    first -> next = second;
    second -> next = third;
    third -> next = nullptr;

    int target, num;
    cout << "enter target value : ";
    cin >> target;
    cout << "enter number to insert : ";
    cin >> num;
    Node *head = first;
    before_target(first, target, num);
    print(head);
    delete_all(head);
    return 0;
}