#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};

void insert_pos(Node *&head, int pos, int val){
    Node *new_node = new Node(val);
    Node *curr = head;
    for (int i = 0 ; i < (pos - 2) && curr != nullptr ; i++){
        if (curr == nullptr){
            cout << "Error 911." << endl;
        }
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
    int num;
    cout << "Enter integer to insert : ";
    cin >> num;
    int pos;
    cout << "Position to insert to : ";
    cin >> pos;
    int pos2 = 3;
    int num2;
    cout << "Enter integer to insert : ";
    cin >> num2;

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(40);

    first -> next = second;
    second -> next = third;
    third -> next = nullptr;

    if (pos < 0){
        cout << "Error 100." << endl;
    }
    if (pos == 1){
        insert_pos(first, 1, num);
    }

    insert_pos(first, pos, num);
    insert_pos(first, pos2, num2);
    print(first);
    delete_all(first);
    return 0;
}