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

int findmax(Node *head){
    if (head == nullptr){
        return -1;
    }
    int maxval = head -> data;
    Node *curr = head;

    while (curr != nullptr){
        if (curr -> data > maxval){
            maxval = curr -> data;
        }
        curr = curr -> next;
    }
    return maxval;
};

void doublevalues(Node *head){
    Node *curr = head;
    while (curr != nullptr){
        curr -> data = curr -> data * 2;
        curr = curr -> next;
    }
}

void print(Node *head){
    Node *curr = head;
    while (curr != nullptr){
        cout << curr -> data << " -> ";
        curr = curr -> next;
    }
    cout << "NULL" << endl;
}

int main(void){
    Node *first = new Node(15);
    Node *second = new Node(42);
    Node *third = new Node(8);
    Node *fourth = new Node(91);
    Node *fifth = new Node(23);

    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = nullptr;

    cout << "Original list : ";
    print(first);
    cout << "Max Value : " << findmax(first) << endl;

    doublevalues(first);

    cout << "Doubled list : ";
    print(first);
    cout << "New Max value : " << findmax(first) << endl;

    delete first;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}