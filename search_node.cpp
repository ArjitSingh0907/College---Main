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

int searchNode(Node *head, int target){
    int position = 1;
    Node *curr = head;
    while (curr != nullptr){
        if (curr -> data == target){
            return position;
        } else {
            curr = curr -> next;
            position += 1;
        }   
    }
    return -1;
};

int main(void){
    Node *first = new Node(12);
    Node *second = new Node(45);
    Node *third = new Node(7);
    Node *fourth = new Node(89);
    Node *fifth = new Node(34);

    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = nullptr;

    int pos = searchNode(first, 89);
    if (pos != -1){
        cout << "Element 89 found at position - " << pos << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    int pos1 = searchNode(first, 100);
    if (pos1 != -1){
        cout << "Element 100 found at position - " << pos1 << endl;
    } else {
        cout << "Element 100 not found!" << endl;
    }
    delete first;
    delete second;
    delete third;
    delete fourth;
    delete fifth;
    return 0;
}