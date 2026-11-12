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

void print(Node *top){
    Node *curr = top;
    while (curr != nullptr){
        cout << curr -> data << " -> ";
        curr = curr -> next;
    }
    cout << "NULL" << endl;
};

int main(void){
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *end = new Node(40);

    first -> next = second;
    second -> next = third;
    third -> next = end;
    end -> next = nullptr;

    print(first);
    return 0;
}