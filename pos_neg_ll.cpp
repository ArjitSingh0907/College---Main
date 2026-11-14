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

void insert_pos(Node *&poshead, int val){
    Node *pos = new Node(val);
    if (poshead == nullptr){
        poshead = pos;
        return;
    }
    Node *curr = poshead;
    while (curr -> next != nullptr){
        curr = curr -> next;
    }
    curr -> next = pos;
};

void insert_neg(Node *&neghead, int val){
    Node *neg = new Node(val);
    if (neghead == nullptr){
        neghead = neg;
        return;
    }
    Node *curr = neghead;
    while (curr -> next != nullptr){
        curr = curr -> next;
    }
    curr -> next = neg;
};

void print_pos(Node *&poshead){
    Node *temp = poshead;
    while (temp != nullptr){
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
};

void print_neg(Node *&neghead){
    Node *temp = neghead;
    while (temp != nullptr){
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
};

void delete_pos(Node *&poshead){
    Node *curr = poshead;
    while (curr != nullptr){
        Node *temp = curr -> next;
        delete curr;
        curr = temp;
    }
};

void delete_neg(Node *&neghead){
    Node *curr = neghead;
    while (curr != nullptr){
        Node *temp = curr -> next;
        delete curr;
        curr = temp;
    }
};

int main(void){
    int num;
    cout << "Enter number of integers : ";
    cin >> num;
    Node *poshead = nullptr;
    Node *neghead = nullptr;
    for (int i = 0 ; i < num ; i++){
        int n;
        cout << "input integer : ";
        cin >> n;
        if (n > 0){
            insert_pos(poshead, n);
        }
        if (n < 0){
            insert_neg(neghead, n);
        }
    }
    cout << "Positive list : ";
    print_pos(poshead);
    cout << "Negative list : ";
    print_neg(neghead);
    delete_pos(poshead);
    delete_neg(neghead);
    return 0;
}