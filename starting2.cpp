#include <iostream>
using namespace std;

struct Node{
    string name;
    Node *next;

    Node (string val){
        name = val;
        next = nullptr;
    }
};

void insert(Node *&head, string val){
    Node *new_top = new Node(val);
    new_top -> next = head;
    head = new_top;
};

void print(Node *head){
    Node *curr = head;
    while (curr != nullptr){
        cout << curr -> name << " -> ";
        curr = curr -> next;
    }
    cout << "NULL" << endl;
};

int main(void){
    Node *start = new Node("Arjit");
    Node *second = new Node("Jatin");
    Node *third = new Node("Gunmay");
    Node *end = new Node("Satyansh");

    start -> next = second;
    second -> next = third;
    third -> next = end;
    end -> next = nullptr;

    insert(start, "None");
    print(start);

    delete start;
    delete second;
    delete third;
    delete end;
    return 0;
}