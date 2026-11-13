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

void at_start(Node *&head, int val){
    Node *new_top = new Node(val);
    new_top -> next = head;
    head = new_top;
};

void at_end(Node *&head, int val){
    Node *temp = head;
    Node *new_node = new Node(val);
    if (head == nullptr){
        head = new_node;
        return;
    }
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

void delete_ptr(Node *head){
    Node *curr = head;
    while (curr != nullptr){
        Node *next_node = curr -> next;
        delete curr;
        curr = next_node;
    }
    head = nullptr;
};

int main(void){
    Node *head = nullptr;
    int num;
    cout << "Enter number of integers : ";
    cin >> num;
    for (int i = 0 ; i < num ; i++){
        int n;
        cout << "enter the number : ";
        cin >> n;
        
        if (n % 2 == 0){
            at_start(head, n);
        } else {
            at_end(head, n);
        }
    }
    print(head);
    delete_ptr(head);
    return 0;
}