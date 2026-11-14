#include <iostream>
using namespace std;

struct Node{
    string data;
    Node *next;
    Node (string val){
        data = val;
        next = nullptr;
    }
};

void insert_end(Node *&head, string val){
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
    int num;
    cout << "How many names : ";
    cin >> num;
    string *arr = new string[num];
    for (int i = 0 ; i < num ; i++){
        string name;
        cout << "enter the name - ";
        cin >> name;
        *(arr + i) = name;
    }
    cout << "Names -> ";
    for (int i = 0 ; i < num ; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;
    
    Node *head = nullptr;
    for (int i = 0 ; i < num ; i++){
        insert_end(head, *(arr + i));
    }
    print(head);
    delete_all(head);
    delete[] arr;
    return 0;
}