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

void print(Node *top){
    Node *curr = top;
    while (curr != nullptr){
        cout << curr -> data << " -> ";
        curr = curr -> next;
    }
    cout << "NULL" << endl;
};

int countNodes(Node *top){
    int count = 0;
    Node *now = top;
    while (now != nullptr){
        count++;
        now = now -> next;
    }
    cout << "Total number of nodes : " << count << endl;
    return count;
};

int sumofNodes(Node *head){
    int sum = 0;
    Node *current = head;
    while (current != nullptr){
        sum = sum + current -> data;
        current = current -> next;
    }
    cout << "Sum of all data values : " << sum << endl;
    return sum;
};

int main(void){
    Node *first = new Node(5);
    Node *second = new Node(15);
    Node *third = new Node(25);
    Node *end = new Node(35);

    first -> next = second;
    second -> next = third;
    third -> next = end;
    end -> next = nullptr;

    countNodes(first);
    sumofNodes(first);
    print(first);
    delete first;
    delete second;
    delete third;
    delete end;

    return 0;
}