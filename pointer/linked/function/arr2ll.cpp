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
    Node *new_node = new Node(val);
    Node *temp = head;
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

void delete_all(Node *head){
    Node *curr = head;
    while (curr != nullptr){
        Node *temp = curr -> next;
        delete curr;
        curr = temp;
    }
};

int main(void){
    int n;
    cout << "number of integers : ";
    cin >> n;

    if (n <= 0){
        cout << "Invalid size." << endl;
        return 0;
    }

    int *arr = new int[n];
    for (int i = 0 ; i < n ; i++){
        cout << "Enter integer : ";
        cin >> *(arr + i);
    };

    cout << "Array elements are ";
    for (int i = 0 ; i < n ; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;
    
    Node *head = nullptr;
    for (int i = 0 ; i < n ; i++){
        insert_end(head, *(arr + i));
    }

    delete[] arr;
    arr = nullptr;

    cout << "Linked List : ";
    print(head);
    delete_all(head);
    return 0;
}