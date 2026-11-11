/*

defining a node...
struct node {
    int data;
    Node *next;
}

creating a node...
Node *n1 = new Node;

accessing data from node...
n1 -> data = 10; or (*n1).data = 10;
n1 -> next = nullptr; or (*n1).next = nullptr;

traversing using pointer...
Node *curr = head;
while (curr != nullptr){
    cout << curr -> data << endl;
    curr = curr -> next;
} cout << "NULL" << endl;

*/