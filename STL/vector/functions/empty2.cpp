#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector <int> vec0 = {1, 2, 3, 4, 5};
    vector <int> vec1 = {1, 2, 3, 4, 5};
    cout << "Before inserting -> ";
    cout << endl;
    cout << "vector 1 : ";
    for (const auto &it : vec0){
        cout << it << " ";
    }
    cout << endl;
    cout << "vector 2 : ";
    for (const auto &it : vec1){
        cout << it << " ";
    }
    cout << endl;
    cout << "Size of vector 1 and 2 are : " << vec0.size() << " and " << vec1.size() << endl;
    cout << "Capacity of vector 1 and 2 are : " << vec0.capacity() << " and " << vec1.capacity() << endl;
    vec0.insert(vec0.begin(), 3, 7);
    vec1.insert(vec1.begin() + 5, 3, 7);
    cout << "After inserting -> ";
    cout << endl;
    cout << "vector 1 : ";
    for (const auto &it : vec0){
        cout << it << " ";
    }
    cout << endl;
    cout << "vector 2 : ";
    for (const auto &it : vec1){
        cout << it << " ";
    }
    cout << endl;
    cout << "Size of vector 1 and 2 are : " << vec0.size() << " and " << vec1.size() << endl;
    cout << "Capacity of vector 1 and 2 are : " << vec0.capacity() << " and " << vec1.capacity() << endl;
    vec0.clear();
    vec1.clear();
    cout << "Size of vector 1 and 2 are : " << vec0.size() << " and " << vec1.size() << endl;
    cout << "Capacity of vector 1 and 2 are : " << vec0.capacity() << " and " << vec1.capacity() << endl;
    return 0;
}