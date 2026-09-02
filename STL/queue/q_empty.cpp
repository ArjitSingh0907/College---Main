#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    if (q.empty())
        cout << "Queue is empty\n";

    q.push(10);
    q.push(20);

    if (!q.empty())
        cout << "Queue is not empty\n";

    q.pop();
    q.pop();

    if (q.empty())
        cout << "Queue is empty again\n";

    return 0;
}
