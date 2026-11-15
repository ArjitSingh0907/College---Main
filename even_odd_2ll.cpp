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
    if (head == nullptr){
        head = new_node;
        return;
    }
    Node *curr = head;
    while (curr -> next != nullptr){
        curr = curr -> next;
    }
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
}

int main(void){
    Node *even_head = nullptr;
    Node *odd_head = nullptr;
    int n;
    cout << "Enter number of int to insert : ";
    cin >> n;

    if (n <= 0){
        cout << "Code exit with an unexpected input." << endl;
        return 1;
    }

    for (int i = 0 ; i < n ; i++){
        int num;
        cout << "int to insert : ";
        cin >> num;

        if (num % 2 == 0){
            insert_end(even_head, num);
        } else {
            insert_end(odd_head, num);
        }
    }
    cout << "Odd list : ";
    print(odd_head);
    cout << "Even list : ";
    print(even_head);
    delete_all(odd_head);
    delete_all(even_head);
    return 0;
}