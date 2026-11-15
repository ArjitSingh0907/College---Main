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

void counter(Node *head){
    int even = 0;
    int odd = 0;
    Node *curr = head;
    while (curr != nullptr){
        if (curr -> data % 2 == 0){
            even++;
        } else {
            odd++;
        }
        curr = curr -> next;
    }
    cout << "Even count = " << even << endl;
    cout << "Odd count = " << odd << endl;
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
    Node *start = new Node(11);
    Node *second = new Node(24);
    Node *third = new Node(37);
    Node *fourth = new Node(40);
    Node *fifth = new Node(52);
    Node *last = new Node(63);

    start -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = last;
    last -> next = nullptr;

    counter(start);
    print(start);

    delete start;
    delete second;
    delete third;
    delete fourth;
    delete fifth;
    delete last;

    return 0;
}